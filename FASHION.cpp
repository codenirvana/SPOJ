#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	long long int t,i,ans,n;
	int F[1001] , M[1001];
	cin >> t;
	while(t--){
        ans=0;
        cin >> n;
        for(i=0;i<n;i++){
            cin >> F[i];
        }
        for(i=0;i<n;i++){
            cin >> M[i];
        }
        sort(F,F+n);
        sort(M,M+n);
        for(i=0;i<n;i++){
            ans+=F[i]*M[i];
        }
        cout << ans << endl;
	}
	return 0;

}
