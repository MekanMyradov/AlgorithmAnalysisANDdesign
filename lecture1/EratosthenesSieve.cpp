// Eratosthenes Sieve Algorithm for finding prime numbers up to n;
#include<bits/stdc++.h>
using namespace std;
#define MAXN (int)(1e5 +3)
bool primes[MAXN];

// true -> prime
// false -> composite

void sieve(int n){
	memset(primes, true, sizeof primes);
	for(int i=2; i<=sqrt(n); i++){
		if(primes[i]==true) for(int j=2*i; j<=n; j+=i) primes[j]=false;
	}
	return ;
}

int main(){
	int n;
	scanf("%d",&n);
	
	sieve(n);
	for(int i=2; i<=n; i++) if(primes[i]==true) printf("%d ",i);
	
	return 0;
}
