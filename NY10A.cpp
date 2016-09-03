#include<iostream>
#include<stdio.h>
#include<string>
#define lli long long int
using namespace std;
//TTT, TTH, THT, THH, HTT, HTH, HHT, HHH
int main(){
     lli T,N,i;
     string S;
     scanf("%lld",&T);
     while(T--){
        scanf("%lld",&N);
        cin >> S;
        lli A[8]={0};
        for(i=2;i<40;i++){
            if( S[i-2] == 'T' ){ //T
                if(S[i-1] == 'T'){ //TT
                    if(S[i] == 'T'){ //TTT
                        A[0]++;
                    } else{ //TTH
                        A[1]++;
                    }
                } else{ //TH
                    if(S[i] == 'T'){ //THT
                        A[2]++;
                    } else{ //THH
                        A[3]++;
                    }
                }
            } else{ //H
                if(S[i-1] == 'T'){ //HT
                    if(S[i] == 'T'){ //HTT
                        A[4]++;
                    } else{ //HTH
                        A[5]++;
                    }
                } else{ //HH
                    if(S[i] == 'T'){ //HHT
                        A[6]++;
                    } else{ //HHH
                        A[7]++;
                    }
                }
            }
        }
        printf("%lld ",N);
        for(i=0;i<8;i++) printf("%lld ",A[i]);
        printf("\n");
     }
     return 0;
}
