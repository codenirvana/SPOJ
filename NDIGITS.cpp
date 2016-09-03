#include<iostream>
using namespace std;

#define lli long long int

int main(){
	lli n , m;
	cin >> n;
	while(n--){
		cin >> m;
		if(m==1){ cout << 10 <<endl; continue; }
		cout << 9;
		for(int i=1;i<m;i++)
            cout << 0;
		cout << endl;
	}
	return 0;
}
