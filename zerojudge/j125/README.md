# j125:4. 蓋步道

## 敘述

有一個大小為 $n \times n$ 的方形區域，$h_{ij}$ 代表位於座標 $(i, j)$ 的格子該處的海拔高度。工程團隊想要從該區域的左上角 $(1, 1)$ 鋪設一條步道到右下角 $(n, n)$，鋪設的步道可以視為在該區域內上下左右四個方向從左上角走到右下角的一條路徑。考量到行人在步道上行走的安全，必須要注意步道每一步之間的高低落差，並希望可以建立出一個最大高度差最小的步道鋪設方案。請輸出該鋪設方案最大高度差的最小值和在該最大高度差的前提下步道的最短路徑長度。 


## 說明

輸入:

第一行為一個數字 $n (1 \le n \le 300)$，代表該區域的大小。接下來有 $n$ 行，第 $i$ 行有 $n$ 個正整數，每一個正整數 $h_{ij} (1 \le h_{ij} \le 10^6)$ 代表該位置的海拔高度。子題配分(20%): $n \le 10$，高度不超過 $10$(20%): $n \le 300$，高度不超過 $10^3$(60%): $n \le 300$，高度不超過 $10^6$

---

輸出:

輸出兩行，第一行輸出鋪設方案中最大高度差的最小值，第二行輸出在該最大高度差下從左上走到右下的最短路徑長度。

## 範例
範例1

```
輸入:
4
9 4 3 2 
5 9 8 10 
3 3 2 8 
6 3 3 4
---

輸出:
4
6
```

## 程式碼
cpp

```cpp
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

```

## 標籤
- APCS
- bfs
- 二分搜
- 最短路


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/j125/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=j125)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-27 19:14:59