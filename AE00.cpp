#include <iostream>
#include <math.h>
using namespace std;

#define lli long long int

int main(){
    lli n,i,j;
    lli A[10000];
    cin >> n;
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    for(i=4;i<=n;i++){
        A[i-1] = A[i-2] + 1;
        for(j=2;j<=sqrt(i);j++){
            if( i%j == 0 )
                A[i-1]+=1;
        }
    }
    cout << A[n-1] << endl;
    return 0;
}
