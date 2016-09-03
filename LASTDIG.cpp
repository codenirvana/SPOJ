#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long int t,a,b,rm,lst,ans;
	int ar[] = {0,0,4,4,2,1,1,4,4,2};
	cin >> t;
	while(t--){
        cin >> a >> b;
        lst=a%10;
        if(lst==1 || b==0){
            ans=1;
        } else if(lst==0){
            ans=0;
        } else{
            rm=ar[lst];
            rm=b%rm;
            if(rm==1) ans=(int)pow(lst,1)%10;
            else if(rm==2) ans=(int)pow(lst,2)%10;
            else if(rm==3) ans=(int)pow(lst,3)%10;
            else ans=(int)pow(lst,4)%10;
        }
        cout << ans << endl;
	}
	return 0;

}
