#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#define lli unsigned long long int
using namespace std;

int main(){
    lli T,NG,NM,g,m,i;
    cin >> T;
    while(T--){
        cin >> NG>>NM;
        lli G[NG], M[NM];
        g=m=i=0;
        while(i<NG){
            cin >> G[i];
            if(G[i]>g) g=G[i];
            i++;
        }
        i=0;
        while(i<NM){
            cin >> M[i];
            if(M[i]>m) m=M[i];
            i++;
        }
        if(g>=m){
            cout << "Godzilla" << endl;
        } else{
            cout << "MechaGodzilla" << endl;
        }
    }
    return 0;
}
