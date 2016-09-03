#include<iostream>
#include<cmath>
#include<vector>
#define lli long long int
using namespace std;

int main(){
    lli T,N,M,S,len,i;
    cin >> T;
    while(T--){
        cin >> N;
        if(N<11){cout << N << endl; continue;}
        while(1){
            M=N;
            S=0;
            while(M>0){
                S+=M%10;
                M/=10;
            }
            if(N%S==0){
                cout << N << endl;
                break;
            } else{
                N++;
            }
        }
    }
    return 0;
}
