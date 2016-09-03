#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#define lli unsigned long long int
using namespace std;

int main(){
    lli T,S,N,B,temp,i,s;
    cin >> T;
    s=1;
    while(T--){
        vector <lli>V;
        S=0;
        cin >> B >> N;
        i=N;
        while(i--){
            cin >> temp;
            V.push_back(temp);
            S+=temp;
        }
        cout << "Scenario #"<< s++ <<":"<<endl;
        if(S<B){
            cout << "impossible"  <<endl<<endl;
        } else if(S==B){
            cout << N  <<endl<<endl;
        } else if(B==0){
            cout << 1 <<endl<<endl;
        } else{
            sort(V.begin(),V.end());
            i=0;
            S=0;
            while(S<B){
                S+=V[N-i++-1];
            }
            cout << i <<endl<<endl;
        }
    }
    return 0;
}
