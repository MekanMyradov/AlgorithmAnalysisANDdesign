#include<bits/stdc++.h>
using namespace std;

// sorts in ascending order
void bubbleSort(int arr[], int len){
	for(int i=0; i<len-1; i++){
		for(int j=i+1; j<len; j++){
			if(arr[i] > arr[j]){
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	for(int i=0; i<len; i++) printf("%d ",arr[i]);
	
	return;
}

int main(){
	int arr[7] = {89, 45, 68, 90, 29, 34, 17};
	bubbleSort(arr, 7);
	
	return 0;
}
