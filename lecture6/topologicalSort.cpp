/* Improved(by me) Kahn's Algorithm to find topological sort for given graph;
PREREQUISITES: 1D and 2D vectors, Queue, Graph Theory;
*/
#include<bits/stdc++.h>
using namespace std;
#define MAXN 10
vector<int> adjList[MAXN];
int inDegree[MAXN];
queue<int> q;
vector<int> result;

void topologicalSort(int n){
	for(int i=0; i<n; i++)
		for(auto j : adjList[i]) inDegree[j]++;
	for(int i=0; i<n; i++) if(inDegree[i]==0) q.push(i);		// if inDegree of the node is 0 then insert that node in the queue;
	
	while(q.empty()==false){
		int node = q.front();
		result.push_back(node);
		q.pop();
		for(auto i: adjList[node]) {
			inDegree[i]--;
			if(inDegree[i]==0) q.push(i);
		}
	} 
	
	return ;
}

int main(){
	int n,m;			//nodes and edges;
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++){
		int a,b;
		scanf("%d %d",&a,&b);
		adjList[a].push_back(b);
	}
	
	topologicalSort(n);
	
	if(result.size()!=n) printf("Graph is not DAG");
	else
		for(int i=0; i<result.size(); i++) printf("%d ",result[i]);
	
	return 0;
}
/*
Sample Input:
4 4
0 1
2 3
1 3
0 2
*/
