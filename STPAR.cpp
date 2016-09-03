#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stack>
#define lli unsigned long long int
using namespace std;

int main(){
    lli N,i,temp,next,flg;
    
    while(1){
        cin >> N;
        if(N==0) break;
        vector <lli>V;
        i=0;
        while(i<N){
            cin >> temp;
            V.push_back(temp);
            i++;
        }
        stack <lli>S;
        next=1;
        i=flg=0;
        while(i<N){
            while(!S.empty() && S.top()==next){
                next++;
                S.pop();
            }
            if(V[i]==next){
                next++;
            } else if(!S.empty() && S.top()<V[i]){
                flg=1;
                break;
            } else{
                S.push(V[i]);
            }
            i++;
        }
        if(flg==0){
            cout << "yes" << endl;
        } else{
            cout << "no" << endl;
        }
    }
    
    return 0;
}
