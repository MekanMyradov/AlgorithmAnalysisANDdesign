//Multiplies two square matrices of order n;
#include<bits/stdc++.h>
using namespace std;

void matrixMultiplication(int A[][3], int B[][3], int n){
	int C[n][n];
// initialize with zero
	for(int i=0; i<n; i++) for(int j=0; j<n; j++) C[i][j] = 0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++) C[i][j]+=A[i][k]*B[k][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) printf("%d ",C[i][j]);
		printf("\n");
	}
	
	return ;
}

int main(){
	int mtrx1[3][3]	= {
						{1, 2, 3},
						{4, 5, 6},
						{-2, 2, 21}
					};
	
	int mtrx2[3][3]	= {
						{1, 12, 3},
						{4, -5, 6},
						{-2, 2, 21}
					};
	
	matrixMultiplication(mtrx1, mtrx2, 3);
	
	return 0;
}
