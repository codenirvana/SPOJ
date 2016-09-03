#include<iostream>
using namespace std;

int main(){
   long long int N;
   cin >> N;
   if( ( N&(N-1) ) == 0 ) cout << "TAK" << endl;
   else cout << "NIE" << endl;
   return 0;
}
