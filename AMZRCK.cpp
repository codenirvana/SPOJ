#include<iostream>
#define lli long long int
using namespace std;

int main(){
     lli T,N,A[45];
     A[0]=1;A[1]=2;
     for(int i=2;i<45;i++)
        A[i] = A[i-1] + A[i-2];
     cin >> T;
     while(T--){
        cin >> N;
        cout << A[N] << endl;
     }
     return 0;
}
