#include <iostream>
using namespace std;

#define lli long long int


int main(){
    lli t, i, ar[10001], sum, ans;
    do{
        cin >> t;
        if(t==-1) break;
        sum=0; ans=0;
        for(i=0;i<t;i++){
            cin >> ar[i];
            sum += ar[i];
        }
        if(sum%t==0){
            sum /= t;
            for(i=0;i<t;i++){
                if(sum < ar[i])
                    ans+=ar[i]-sum;
            }
            cout << ans << endl;
        } else{
            cout << -1 << endl;
        }
    } while(true);
    return 0;
}
