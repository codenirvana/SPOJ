#include <iostream>
using namespace std;

int main(){
	long long int t,n,i,f;
	int A[10001];
	cin >> t;
	while(t--){
        cin >> n;
        f=1;
        for(i=0;i<n;i++)
            cin >> A[i];
        for(i=0;i<n;i++){
            if(i+1==4) break;
            for(;A[i]!=0; A[i]-=1 , A[i+1]-=1 ){
                if(A[i+1]==0){
                    f=0; break;
                }
            }
        }
        if(f==1) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
	return 0;

}
