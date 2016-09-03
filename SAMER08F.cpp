#include<iostream>
using namespace std;

int main(){
    unsigned long long int n, i, sqrs;
    int sqr[100];
    sqr[0] = 1;
    for(i=2;i<=100;i++){
        sqr[i-1] = sqr[i-2] + i*i;
    }
    do{
        cin >> n;
        if(n==0) break;
        cout << sqr[n-1] << endl;
    } while(true);
    return 0;
}
