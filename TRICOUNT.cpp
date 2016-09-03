#include<iostream>
#include<stdio.h>
#define lli long long int
using namespace std;

int main(){
     lli T,N,S;
     scanf("%lld",&T);
     while(T--){
        scanf("%lld",&N);
        S = (N*(N+2)*(2*N+1)/8);
        printf("%lld\n",S);
     }
     return 0;
}
