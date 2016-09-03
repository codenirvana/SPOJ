#include<iostream>
using namespace std;

#define lli long long int

int main(){
	lli n , m , e , o , k;
	cin >> n;
	while(n--){
        e=0; o=0;
		cin >> m;
		while(m){
            k = m%10;
            if(k%2==0) e++;
            else o++;
            m/=10;
		}
		if(e>o) k=0;
		else if(o>e) k=1;
		else k=0;
		if(k==0) cout << "even" << endl;
		else cout << "odd" << endl;
	}
	return 0;
}
