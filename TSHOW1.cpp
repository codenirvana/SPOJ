#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#define lli unsigned long long int
using namespace std;

void bin(unsigned n){
    lli i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i)? printf("1"): printf("0");
}

int main(){
    lli T,N,X,Y1,Y2,Z,i,j,k;
    scanf("%lld",&T);
    while(T--){
        scanf("%lld",&N);

        X=floor(log(N)/log(2));
        Y1=pow(2,X);
        Y2=pow(2,X+1);
        Z=N-Y1+1;

        if(N+1==Y2) Z=0;

        i=X;
        if(i==0) i=1;
        else if(N+1==Y2) i++;

        vector <lli>V;

        if(Z==0){
            V.push_back(0);
        }else{
            while(Z>0){
                V.push_back( Z%2 );
                //cout << Z%2;
                Z/=2;
            }
        }

        k=V.size();
        reverse(V.begin(), V.end());

        for(j=0;j<i-k;j++){
            cout << 5;
        }
        for(j=0;j<k;j++){
            if(V[j]==1) cout << 6;
            else cout << 5;
        }

        cout << endl;
    }
    return 0;
}
