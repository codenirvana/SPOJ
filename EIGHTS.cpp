#include <iostream>
#include <stdlib.h>
using namespace std;

#define lli long long int


int main(){
    lli n,a;
    cin >> n;
    while(n--){
        cin >> a;
        cout << 192+250*(a-1) << endl;
    }
    return 0;
}
