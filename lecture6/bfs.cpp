/* BFS traversal in undirected graph;
PREREQUISITE: Graph Theory, Vectors, Queue;
*/
#include<bits/stdc++.h>
using namespace std;
#define MAXN 15
vector<int> adjList[MAXN];
bool visited[MAXN];

void bfs(int start){
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while(q.empty()==false){
		int u = q.front();
		printf("%d ",u);
		q.pop();
		for(int i : adjList[u]) if(visited[i]==false) { q.push(i); visited[i] = true; }
	}
	
	return ;
}

int main(){
	int n;		// # of nodes;
	int m;		// # of edges;
	scanf("%d %d",&n,&m);
	int a,b;
	for(int i=0; i<m; i++){
		scanf("%d %d",&a,&b);
		adjList[a].push_back(b);	
		adjList[b].push_back(a);
	}
	memset(visited, false, sizeof visited);		// initializing visited array with false;
	bfs(a);
	for(int i=1; i<=n; i++)	if(visited[i] == false) bfs(i);
	
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
