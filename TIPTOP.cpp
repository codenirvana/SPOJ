#include <iostream>
#include <math.h>
using namespace std;

#define lli long long int


int main(){
	lli t,n,x;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin >> n;
        x=sqrt(n);

        if(x*x==n || (x-1)*(x-1)==n || (x+1)*(x+1)==n )
            cout << "Case " << i << ": Yes" << endl;
        else
            cout << "Case " << i << ": No" << endl;
	}
	return 0;

}
