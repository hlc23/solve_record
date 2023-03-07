#include<bits/stdc++.h>
using namespace std;

int N;
int maze[101][101];
int visted[101][101];
int move_x[4] = {1, -1, 0, 0}, move_y[4] = {0, 0, 1, -1};

void print_all(){
	cout<<"\n==================\n";
	cout<<"maze:\n";
	for (int c=1; c<=N; c++){
		for (int r=1; r<=N; r++){
			cout<<maze[c][r];
		}
		cout<<"\n";
	}
	cout<<"==================\n";
	cout<<"visted:\n";
	for (int c=1; c<=N; c++){
		for (int r=1; r<=N; r++){
			cout<<visted[c][r];
		}
		cout<<"\n";
	}
	cout<<"==================\n";
}

void init(){
	for (int i=1; i<101; i++){
		for (int j=1; j<101; j++){
			visted[i][j] = -1;
		}
	}	
}

signed main(){
	init();
	// Input
	string r;
	cin>>N;
	for (int n=1; n<=N; n++){
		cin>>r;
		for (int t=0; t<N; t++){
			if (r[t] == '.'){
				maze[n][t+1] = 0;
			}
			else maze[n][t+1] = 1;
		}
	}
	
	// Process
	queue<pair<int, int> > q;
	q.push(make_pair(2, 2));
	visted[2][2] = 1;
	while (q.size() > 0){
		pair<int, int> p = q.front();
		q.pop();
		int x = p.first, y = p.second;
		for (int m=0; m<4; m++){
			int tx = x+move_x[m], ty = y+move_y[m];
			if (tx <= 1 || ty <= 1 || tx >= N || ty >= N) continue;
			if (visted[tx][ty] == -1 && maze[tx][ty] == 0){
				q.push(make_pair(tx, ty));
				visted[tx][ty] = visted[x][y]+1;
			}
		}
	}
	// Output
	if (visted[N-1][N-1] == -1) cout<<"No solution!";
	else cout<<visted[N-1][N-1];
}