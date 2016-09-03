#include <iostream>
using namespace std;

int dow(int d, int m, int y){
    static int X[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y-=m<3;
    return( y + y/4 - y/100 + y/400 + X[m-1] + d) % 7;
}

int main(){
    int d,m,y,wid,t;
    struct tm * timeinfo;
    string week[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    cin >> t;
    while(t--){
        cin >> d >> m >> y;
        wid=dow(d,m,y);
        cout << week[wid] << endl;
    }
    return 0;
}
