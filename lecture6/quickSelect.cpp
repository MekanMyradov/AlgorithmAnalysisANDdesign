#include<bits/stdc++.h>
using namespace std;

int quickSelect(int *arr, int n, int k){	// finds k-th smallest element in array;
	
	if(k<=0 || k>n) return INT_MIN;			// if position is out of range;

	int pivot_index = rand()%n;
	swap(arr[n-1], arr[pivot_index]);
	
	int ind = 0;
	for(int i=0; i<n-1; i++){
		if(arr[i] <= arr[n-1]){
			swap(arr[i], arr[ind]);
			ind++;
		}
	}
	swap(arr[n-1], arr[ind]);
	
	if(ind == k-1) return arr[ind];
	if(ind > k-1) return quickSelect(arr, ind, k);							// go to left part
	if(ind < k-1) return quickSelect(arr+ind+1, n-ind-1, k-ind-1);			// go to right part
}

int main(){
	int arr[] = {4, 1, 10, 8, 7, 12, 9, 2, 15};
	int n = 9;
	
	int result = quickSelect(arr, n, 6);			
	if(result == INT_MIN) printf("out of range");
	else printf("%d",result);
	
	return 0;
}
