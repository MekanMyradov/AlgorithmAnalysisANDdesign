// insertion sort;
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int n){		// sorts in increasing order
	for(int i=1; i<n; i++){
		int v = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>v){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = v;
	}
	
	for(int i=0; i<n; i++) printf("%d ",arr[i]);	
	
	return ;
}

int main(){
	int arr[] = {89, 45, 68, 90, 29, 34, 17};
	insertionSort(arr, 7);
	
	return 0;
}
