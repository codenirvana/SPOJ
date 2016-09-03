#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#define lli unsigned long long int
using namespace std;

int main(){
    lli N, A[100000],i,j;

    while(1){
        cin >> N;
        if(N==0) break;
        i=0;
        while(i<N){
           cin >> A[i];
           i++;
        }
        i=j=0;
        while(i<N){
            if(i+1==A[ A[i]-1 ]){

            } else{
                    j=1;
                    break;
            }
            i++;
        }
        if(j){
            cout << "not ambiguous" << endl;
        } else{
            cout << "ambiguous" << endl;
        }
    }
    return 0;
}
