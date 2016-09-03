#include <iostream>
#include <string>

using namespace std;

int main(){
    float a, b, i;
    int c;
    while(1){
        cin >> a;
        if(a==0.00) break;
        b=0.00;
        c=0;
        i=2;
        while(b<=a){
            c++;
            b+=1/i++;
        }
        cout << c << " card(s)" << endl;
    }
    return 0;
}
