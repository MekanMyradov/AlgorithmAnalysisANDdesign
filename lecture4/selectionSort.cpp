#include<bits/stdc++.h>
using namespace std;

// sorts in ascending order
void selectionSort(int *arr, int len){
	for(int i=0; i<len-1; i++){
		int min_index = i;
		for(int j=i+1; j<len; j++){
			if(arr[min_index] > arr[j]) min_index = j;
		}
		int tmp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = tmp;
	}
	
	for(int i=0; i<7; i++) printf("%d ",arr[i]);
	
	return ;
}

int main(){
	int arr[7] = {89, 45, 68, 90, 29, 34, 17};
	
	selectionSort(arr, 7);
	
	return 0;
}
