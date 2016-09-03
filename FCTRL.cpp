#include<iostream>
using namespace std;

#define lli long long int

lli TZ (lli  n){
    lli count = 0;
    for (int i=5; n/i>=1; i *= 5)
          count += n/i;

    return count;
}

int main(){
	lli n , m;
	cin >> n;
	while(n--){
        cin >> m;
        m = TZ(m);
        cout << m << endl;
	}
	return 0;
}
