#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int G,B;
	while(1){
		cin>>G>>B;
		if(G==-1 && B==-1) break;
		if(G<B)	swap(G,B);
		cout<<ceil(double(G)/double(B+1))<<endl;
	}
	return 0;
}