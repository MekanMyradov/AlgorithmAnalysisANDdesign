/* Recursive DFS traversal in undirected graph;
PREREQUISITE: Graph Theory, Vectors;
*/
#include<bits/stdc++.h>
using namespace std;
#define MAXN 15
vector<int> adjList[MAXN];
bool visited[MAXN];

void dfs(int start){
	visited[start] = true;
	printf("%d ",start);
	for(int u : adjList[start]) if(visited[u]==false) dfs(u);
	
	return ;
}

int main(){
	int n; 			// number of nodes;
	int m;			// number of edges;
	scanf("%d %d",&n,&m);
	int a,b;
	for(int i=0; i<m; i++){
		scanf("%d %d",&a,&b);
		adjList[a].push_back(b);
		adjList[b].push_back(a);
	}
	memset(visited, false, sizeof visited);		// initializing visited array with false;	 
	dfs(a);	
	for(int i=1; i<=n; i++) if(visited[i]==false) dfs(i);

	return 0;
}

/* sample input:
10 12
1 3
1 4
1 5
2 5
2 6
3 4
3 6
5 6
7 8
7 10
8 9
9 10
*/
