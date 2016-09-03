#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define ll long long int
#define sd(a) scanf("%lld",&a)
#define f(i,j) for(i=0;i<j;i++)

using namespace std;

int MAX( ll a, ll b ) { return ( a > b )? a : b; }

int main(){
    ll W, N, i, j, k;
    sd(W);
    sd(N);
    ll w[N+1], v[N+1];
    f(i,N){
        sd(w[i]);sd(v[i]);
    }
    ll V[N+1][W+1];

    for(i=0;i<=N;i++){
        for(j=0;j<=W;j++){
            if(i==0 || j==0) V[i][j]=0;
            else if(w[i-1]<=j){
                V[i][j]=MAX(V[i-1][j],v[i-1]+V[i-1][j-w[i-1]]);
            } else{
                V[i][j]=V[i-1][j];
            }
        }
    }

    cout << V[N][W] << endl;

    return 0;
}
