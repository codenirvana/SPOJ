#include<iostream>

using namespace std;

int main(){
    int ar[200]={0};
    int t,n,c,i,j,mul,cry;
    cin >> t;
    while(t--){
        cin >> n;
        ar[0]=1;
        c=0; cry=0;
        for(i=2;i<=n;i++){
            for(j=0;j<=c;j++){
                mul = (ar[j]*i) + cry;
                ar[j] = mul%10;
                cry = mul/10;
            }
            while(cry>0){
                ar[++c] = cry%10;
                cry /= 10;
            }
        }
        for(i=c;i>=0;i--){
            cout << ar[i];
        }
        cout << endl;
    }
    return 0;
}
