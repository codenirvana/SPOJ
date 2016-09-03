#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll t, x, y, z;
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        ll n, d, a;
        n = 2*z/(x+y);
        d = (y-x)/(n-5);
        a = x - 2*d;
        cout << n << endl;
        for(x=1;x<=n;x++){
            z = a+(x-1)*d;
            cout << z << " ";
        }
        cout << endl;
    }
    return 0;
}
