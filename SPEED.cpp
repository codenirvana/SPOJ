#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int gcd(int a, int b){
  int c = a % b;
  while(c != 0){
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		int c;
		if(a > b)
			c = a - b;
		else
			c = b - a;
		if (a < 0) a = a * (-1);
		if (b < 0) b = b*(-1);
		c = c/gcd(a,b);
		cout << c << endl;
	}
	return 0;
}
