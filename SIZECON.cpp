#include <iostream>
using namespace std;

int main(){
	int t,a;
	long long int s=0;
	cin >> t;
	while(t--){
        cin >> a;
        if(a>0) s+=a;
	}
	cout << s << endl;
	return 0;

}
