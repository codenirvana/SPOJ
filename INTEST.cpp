#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
using namespace std;

int read_int(){
    register char c=gc();
    int ret=0;
    while(c>='0' && c<='9'){
        ret=ret*10+(c-48);
        c=gc();
    }
    return ret;
}

int main() {
	int n , k ,t,ans=0;
	n=read_int(); k=read_int();
	while(n--){
	    t=read_int();
	    if(t%k==0) ans++;
	}
	printf("%d\n",ans);
	return 0;
}
