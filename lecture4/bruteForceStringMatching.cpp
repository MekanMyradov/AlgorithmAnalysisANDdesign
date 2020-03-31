// brute force string matching
#include<bits/stdc++.h>
using namespace std;

int bruteForceStringMatch(string text, string pattern){
	int n = text.length();
	int m = pattern.length();
	
	for(int i=0; i<=n-m; i++){
		int j=0;
		while(j<m && pattern[j]==text[i+j])
			j++;
		if(j==m) return i;
	}
	return -1;
}

int main(){
	string text = "Sherlock Holmes and Mycroft Holmes";
	string pattern = "Holmes";
	int firstAppeared = bruteForceStringMatch(text, pattern);
	if(firstAppeared==-1) printf("pattern does not exist in text");
	else printf("pattern begins at %d",firstAppeared);
	
	return 0;
}
