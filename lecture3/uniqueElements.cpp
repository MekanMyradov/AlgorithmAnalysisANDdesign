// Determines whether all the elements in a given array are distinct
#include<bits/stdc++.h>
using namespace std;

bool uniqueElements(int arr[], int len){
	for(int i=0; i<len-1; i++){
		for(int j=i+1; j<len; j++){
			if(arr[i]==arr[j]) return false;
		}
	}
	
	return true;
}

int main(){
	int arr[] = {12, -23, 34, 54, 89, 0, 32, 34};
	bool state = uniqueElements(arr, 8);
	if(state==true) printf("all elements in array are distinct");
	else printf("there are several identical elements in array");
	return 0;
}
