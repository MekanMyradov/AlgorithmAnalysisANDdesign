// finds the number of digits in binary representation of n;
#include<bits/stdc++.h>
using namespace std;

int binary(int n){
	int cnt=0;
	while(n>0){
		cnt++;
		n/=2;
	}
	
	return cnt;
}

int main(){
	int n=15;
	int digits = binary(n);
	printf("%d",digits);
	
	return 0;
}
