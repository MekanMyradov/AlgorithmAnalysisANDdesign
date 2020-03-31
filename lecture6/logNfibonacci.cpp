// n-th fibonacci in O(logn) time

#include<bits/stdc++.h>
using namespace std;
int dp[2][2] = {{0,1},{1,1}};
int odd[2][2] = {{0,1},{1,1}};

void compute(int n){
	if(n==1) return ;
	
	compute(n>>1);
	int tmp[2][2] = {{0,0},{0,0}};
	tmp[0][0] = (dp[0][0]*dp[0][0]) + (dp[0][1]*dp[1][0]);
	tmp[0][1] = (dp[0][0]*dp[0][1]) + (dp[0][1]*dp[1][1]);
	tmp[1][0] = (dp[1][0]*dp[0][0]) + (dp[1][1]*dp[1][0]);
	tmp[1][1] = (dp[1][0]*dp[0][1]) + (dp[1][1]*dp[1][1]);
	
	dp[0][0] = tmp[0][0];
	dp[0][1] = tmp[0][1];
	dp[1][0] = tmp[1][0];
	dp[1][1] = tmp[1][1];
	if( n&1 == 1 ){		// eger n tekse
		dp[0][0] = (tmp[0][0]*odd[0][0]) + (tmp[0][1]*odd[1][0]);
		dp[0][1] = (tmp[0][0]*odd[0][1]) + (tmp[0][1]*odd[1][1]);
		dp[1][0] = (tmp[1][0]*odd[0][0]) + (tmp[1][1]*odd[1][0]);
		dp[1][1] = (tmp[1][0]*odd[0][1]) + (tmp[1][1]*odd[1][1]);
	}
	
	return;
}

int main(){
	int n;
	scanf("%d",&n);
	if(n==0) { printf("%d",dp[0][0]); return 0; }
	compute(n);	
	printf("%d",dp[0][1]);
	
	return 0;
}
