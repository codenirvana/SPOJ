#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	long long int N,i,T;
	scanf("%lld",&T);
	N=0;
	while(T--){
		scanf("%lld",&i);
		N^=i;
	}
	printf("%lld\n",N);
	return 0;
}