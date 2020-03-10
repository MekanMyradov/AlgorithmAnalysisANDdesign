// Euclidean GCD
#include<bits/stdc++.h>
using namespace std;
int EuclideanGCD(int m, int n){
	if(n==0) return m;
	return EuclideanGCD(n, m%n);
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	if(m<0 || n<0) return 0;
	int gcd = EuclideanGCD(m,n);
	printf("%d",gcd);
	
	return 0;
}
