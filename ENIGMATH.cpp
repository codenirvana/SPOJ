#include <iostream>
#include <stdio.h>
using namespace std;

long long int gcd(long long int A, long long int B){
    if(B==0) return A;
    else return gcd(B,A%B);
}

int main() {
	long long int T,A,B,X,Y;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld%lld",&A,&B);
		X = B/gcd(A,B);
		Y = A/gcd(A,B);
	    printf("%lld %lld\n",X,Y);
	}
	return 0;
}