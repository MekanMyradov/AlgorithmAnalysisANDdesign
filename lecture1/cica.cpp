// Consecutive Integer Checking Algorithm to find GCD
#include<bits/stdc++.h>
using namespace std;

int find(int m, int n){
	if(m<0 || n<0) return -1;
	
	int minn,maxx; 
	if(m<n) { minn=m; maxx=n; }
	else { minn=n; maxx=m; }
	if(minn==0) return maxx;
	
	while(minn>1){
		if(m%minn==0 && n%minn==0) return minn;
		minn--;
	}
	return minn;
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int gcd = find(m,n);
	if(gcd==-1) printf("invalid input");
	else printf("%d",gcd);
	
	return 0;
}

