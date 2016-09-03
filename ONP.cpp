#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isOpperator(char C){
    if(C == '+' || C == '-' || C == '*' || C == '/' || C== '^')
		return true;
	return false;
}

int opperatorWeight(char C){
    int weight = -1;
    switch (C){
        case '+':
        case '-':
                weight=1;
                break;
        case '*':
        case '/':
                weight=2;
                break;
        case '^':
                weight=3;
                break;
    }
    return weight;
}

bool hasHigherPrecedence(char o1, char o2){
    int o1w = opperatorWeight(o1);
    int o2w = opperatorWeight(o2);

    return (o1w > o2w) ? true : false;
}

string infixToPostfix(string exp){
    stack<char> S;
    string postfix="";
    for(int i=0;i<exp.length();i++){
        if(isOpperator(exp[i])){
            while(!S.empty() && S.top()!='(' && hasHigherPrecedence(S.top(),exp[i])){
                postfix+=S.top();
                S.pop();
            }
            S.push(exp[i]);
        } else if(exp[i]=='('){
            S.push(exp[i]);
        } else if(exp[i]==')'){
            while(!S.empty() && S.top()!='('){
                postfix+=S.top();
                S.pop();
            }
            S.pop();
        } else{
            postfix+=exp[i];
        }
    }

    while(!S.empty()){
        postfix+=S.top();
        S.pop();
    }
    return postfix;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string expression;
        cin >> expression;
        string postfix = infixToPostfix(expression);
        cout << postfix << endl;
    }
    return 0;
}
