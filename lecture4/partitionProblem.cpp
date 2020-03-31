/*	Given n positive integers, partition them into two disjoint
subsets with the same sum of their elements;
NOTE: the problem does not always have a solution;
PREREQUISITE: vectors, basics of bit manipulation;
*/
#include<bits/stdc++.h>
using namespace std;
int subsets[10];
vector<int> firstPart, secondPart;

int main(){
	int n=8;
	int arr[n] = {1,2,6,3,0,4,2,2};
	
	int k = (1<<n);		// k is number of subsets; 
//	printf("%d",k);

	for(int i=1; i<k; i++){
		for(int j=n-1; j>=0; j--){
			if(subsets[j]==0) { subsets[j]=1; break; }
			else subsets[j]=0;
		}
		int sum1 = 0, sum2 = 0;
		for(int j=0; j<n; j++){
			if(subsets[j]==0) sum1 += arr[j];
			else sum2 += arr[j];
		}
		
		if(sum1==sum2){
			for(int j=0; j<n; j++){
				if(subsets[j]==0) firstPart.push_back(arr[j]);
				else secondPart.push_back(arr[j]);  
			}
			break;
		}
	}
	
	if(firstPart.size()==0) printf("partition is not possible");
	else{
		for(int i=0; i<firstPart.size()-1; i++) printf("%d+",firstPart[i]);
		printf("%d = ",firstPart[firstPart.size()-1]);
		for(int i=0; i<secondPart.size()-1; i++) printf("%d+",secondPart[i]);
		printf("%d",secondPart[secondPart.size()-1]);
	}
	
	return 0;
}
