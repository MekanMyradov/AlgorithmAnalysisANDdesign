#include<bits/stdc++.h>
using namespace std;
#define MAXN (int)(1e2 +2)
int arr[MAXN];

int binarySearch(int left, int right, int target){
	if(left>right) return -1;
	
	int mid = (left+right)/2;
	if(arr[mid]==target) return mid;
	if(arr[mid]>target) return binarySearch(left, mid-1, target);
	if(arr[mid]<target) return binarySearch(mid+1, right, target); 
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	int target;
	scanf("%d",&target);	
	int index = binarySearch(0, n-1, target);
	if(index==-1) printf("required target does not exist in array");
	else printf("%d",index);
	
	return 0;
}
