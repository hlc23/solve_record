#include<iostream>
#include<utility>
#include<queue>
#define int long long

using namespace std;

int area[301][301], visited[301][301];
int move_x[4] = {0, 0, -1, 1}, move_y[4] = {1, -1, 0, 0};
int n, temp;

bool BFS_check(int h){
    for (int i=1; i<301; i++){
        for (int j=1; j<301; j++){
            visited[i][j] = -1;
        }
    }
    visited[1][1] = 0;
    queue<pair<int, int> > q;
    q.push(make_pair(1, 1));
    while (q.size() > 0){
        pair<int, int> p = q.front();
        q.pop();
        int x=p.first, y=p.second;
        for (int m=0; m<4; m++){    
            int nx = x + move_x[m], ny = y + move_y[m];

            if (nx < 1 || nx > n || ny < 1 || ny > n) continue;
            if (visited[nx][ny] == -1){
                if (abs(area[x][y]-area[nx][ny]) <= h){
                    q.push(make_pair(nx, ny));
                    visited[nx][ny] = visited[x][y]+1;
                }
            }
        }
    }
    if (visited[n][n] != -1) return true;
    return false;
}

void solve(){
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin>>temp;
            area[i][j] = temp;
        }
    }
    int l=0, r=1000001;
    while (l<=r){
        int mid = (l+r)/2;
        if (BFS_check(mid)) r = mid-1;
        else l = mid+1;
    }
    
    for (int i=1; i<301; i++){
        for (int j=1; j<301; j++){
            visited[i][j] = -1;
        }
    }
    visited[1][1] = 0;
    queue<pair<int, int> > q;
    q.push(make_pair(1, 1));
    while (q.size() > 0){
        pair<int, int> p = q.front();
        q.pop();
        int x=p.first, y=p.second;
        for (int m=0; m<4; m++){    
            int nx = x + move_x[m], ny = y + move_y[m];
            if (nx < 1 || nx > n || ny < 1 || ny > n) continue;
            if (visited[nx][ny] == -1){
                if (abs(area[x][y]-area[nx][ny]) <= l){
                    q.push(make_pair(nx, ny));
                    visited[nx][ny] = visited[x][y]+1;
                }
            }
        }
    }
    cout<<l<<"\n"<<visited[n][n];
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}
