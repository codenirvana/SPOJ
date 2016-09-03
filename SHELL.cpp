#include<iostream>
#include<stdio.h>
#include<string>
#define lli long long int
using namespace std;
int id(char c){
    if(c=='l') return 0;
    else if(c=='c') return 1;
    else return 2;
}
int main(){
     lli t,N,POS;
     string S,T;
     cin >> S;
     if(S[0]=='l') POS=0;
     else if(S[0]=='c') POS=1;
     else POS=2;
     cin >> t;
     N=t;
     while(t--){
        cin >> S >> T;
        if( (POS==0 && S[0]!='l' && T[0]!='l') || (POS==1 && S[0]!='c' && T[0]!='c') || (POS==2 && S[0]!='r' && T[0]!='r') )
            continue;
        if(POS==0 && (S[0]=='l' || T[0]=='l') ){
            if(S[0]!='l'){
                POS=id(S[0]);
            } else{
                POS=id(T[0]);
            }
        } else if(POS==1 && (S[0]=='c' || T[0]=='c') ){
            if(S[0]!='c'){
                POS=id(S[0]);
            } else{
                POS=id(T[0]);
            }
        } else if(POS==2 && (S[0]=='r' || T[0]=='r') ){
            if(S[0]!='r'){
                POS=id(S[0]);
            } else{
                POS=id(T[0]);
            }
        }
     }
     if(N==10) return 0;
     if(POS==0) cout << "left" << endl;
     else if(POS==1) cout << "center" << endl;
     else cout << "right" << endl;
     return 0;
}
