#include<bits/stdc++.h>
using namespace std;

int area[301][301];
int move_x[4]={1, -1, 0, 0},
	move_y[4]={0, 0, 1, -1};
int visted[301][301];
int n;

void init(){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++) visted[i][j]=-1;
	}
}

void bfs(int high){
	init();
	queue<pair<int, int> > q;
	q.push(make_pair(1, 1));
	visted[1][1] = 0;
	while (q.size() > 0){
		pair<int, int> p = q.front();
		q.pop();
		int x = p.first,
			y = p.second;
		for (int m=0; m<4; m++){
			int tx = x + move_x[m],
				ty = y + move_y[m];
			if (tx <= 0 or ty <= 0 or tx > n or ty > n) continue;
			if (abs(area[tx][ty] - area[x][y]) <= high and (visted[tx][ty] == -1)){
				q.push(make_pair(tx, ty));
				visted[tx][ty] = visted[x][y]+1;
			}
		}
	}
}

signed main(){
	cin>>n;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++) cin>>area[i][j];
	}
	int l=0, r=1e6;
	while (l <= r){
		int m = (l+r)/2;
		bfs(m);
		if (visted[n][n] !=  -1) r = m-1;
		else l = m+1;
	}
	bfs(l);
	cout<<l<<"\n"<<visted[n][n];
}