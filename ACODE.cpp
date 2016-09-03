#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
     lli len,x,i;
     while(1){
        string str;
        cin >> str;
        if(str[0]=='0')
        break;
        lli dp[5001]={0};
        len=str.length();
        dp[0]=1;
         for(i=1;i<len;i++){
            x=(str[i-1]-'0')*10+(str[i]-'0');

            if(str[i]-'0') dp[i]=dp[i-1];

            if(x>9 && x<=26) dp[i]+=dp[(i-2)<0?0:i-2];
         }
        cout << dp[len-1] << endl;
     }
     return 0;
}
