#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	double n,a;
	cin>>n;
	while(n!=0)
	{

		a=(n*n)/(atan(1.0)*8);
		printf("%.2f\n",a);
		cin>>n;
	}
	return 0;
}
