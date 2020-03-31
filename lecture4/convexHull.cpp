// convex hull brute force
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v;

void convexHull(int points[][2], int n){
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
//			if(i==j) continue;
// equation of the line: 			
			int b = points[i][0] - points[j][0];
			int a = points[j][1] - points[i][1];
			int c = (points[i][0]*points[j][1]) - (points[i][1]*points[j][0]);
		bool isOver = false, isBelow = false;
			for(int k=0; k<n; k++){
				if(k==i || k==j) continue;
				if(isOver==true && isBelow==true) break;
				int ax = a*points[k][0];
				int by = b*points[k][1];
				if(ax+by-c < 0) isBelow = true;
				if(ax+by-c > 0) isOver = true;
			}
			if(isBelow ^ isOver == true) v.push_back(make_pair(i,j));
		}
	} 
	
	for(int i=0; i<v.size(); i++){
		printf("%d %d <-> %d %d\n",points[v[i].first][0],points[v[i].first][1],points[v[i].second][0],points[v[i].second][1]);
	}
	
	return;
}

int main(){
	int n = 12;		// # of points
	int points[n][2] = {
						{-6, 1},
						{-5, 2},
						{-4, 3},
						{-4, 1},
						{-4, -2},
						{-2, -1},
						{0, -2},
						{1, 1},
						{2, 2},
						{5, 1},
						{1, -4},
						{4, -3}
					}; 
	
	convexHull(points, n);
	
	return 0;
}
