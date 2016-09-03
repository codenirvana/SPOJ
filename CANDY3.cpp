#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define ll long long

int main(){
    ll t, n, s, x, i;
    cin >> t;
    while(t--){
        getchar();
        cin >> n;
        s=0;
        for(i=0;i<n;i++){
            cin >> x;
            s=(s+x)%n;
        }
        if(s==0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
