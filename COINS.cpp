#include <iostream>
#include <map>
using namespace std;

map<long long,long long> V;

long long coins(long long n){
    if(n==0) return 0;
    if(V[n]==0){
        long long mx = max(n, coins(n/2) + coins(n/3) + coins(n/4));
        V[n]=mx;
    }
    return V[n];
}

int main(){
    long long n;
    while(cin >> n)
        cout << coins(n) << endl;
    return 0;
}
