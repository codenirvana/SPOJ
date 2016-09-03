#include <iostream>
#include <stdlib.h>
using namespace std;

#define lli long long int


int main(){
    int n,a,b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a>3){
            cout << 0 << endl;
        } else{
            if(b>3){
                b=3;
            }
            cout << b-a + 1 << endl;
        }
    }
    return 0;
}
