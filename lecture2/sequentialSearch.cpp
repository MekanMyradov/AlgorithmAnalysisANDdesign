// Searches for a given value in a given array by sequential search;
#include<bits/stdc++.h>
using namespace std;

int sequentialSearch(int arr[], int len, int k){
	for(int i=0; i<len; i++)
		if(arr[i] == k) return i;
	return -1;
}

int main(){
	int arr[] = {12, 32, 34, 12, -43, 0, 3002};
	int k = 34;
	int index_k = sequentialSearch(arr, 7, k);	
	if(index_k == -1) printf("k does not exist in array");
	else printf("index of k in array: %d",index_k);
	
	return 0;
}
