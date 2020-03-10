// finds max element in array
#include<bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int len){
	int maxValue = arr[0];
	
	for(int i=1; i<len; i++){
		if(maxValue < arr[i]) maxValue = arr[i];
	}
	
	return maxValue;
}

int main(){
	int arr[] = {12, -23, 34, 54, 89, 0};
	int maxValue = maxElement(arr, 6);
	
	printf("%d",maxValue);
	
	return 0;
}
