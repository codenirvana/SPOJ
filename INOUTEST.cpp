#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
using namespace std;

void scanint(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main() {
	int n,a,b;
	scanint(n);
	while(n--){
	    scanint(a);
	    scanint(b);
	    printf("%d\n",a*b);
	}
	return 0;
}
