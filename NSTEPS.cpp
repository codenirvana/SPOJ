#include <iostream>
using namespace std;

int main(){
	long int t,a,b,c;
	cin >> t;
	while(t--){
        cin >> a >> b;
        if(a%2==0 && a==b){
            c = a*2;
        } else if(a%2==1 && a==b){
            c = (a-1)*2+1;
        } else if(a%2==0 && a==b+2){
            c = a*2 - 2;
        } else if(a%2==1 && a==b+2){
            c = (a-1)*2-1;
        } else{
            cout << "No Number" << endl;
            continue;
        }
        cout << c << endl;
	}
	return 0;

}
