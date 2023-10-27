#include<bits/stdc++.h>
using namespace std;
int m, n;

struct Cell{
    bool walked = false;
    bool up = false, down = false, left = false, right = false;
    Cell(){}
    Cell(char c){
        switch (c){
            case 'X':
                up = true;
                down = true;
                left = true;
                right = true;
                break;
            case 'I':
                up = true;
                down = true;
                break;
            case 'H':
                left = true;
                right = true;
                break;
            case 'L':
                up = true;
                right = true;
                break;
            case '7':
                down = true;
                left = true;
                break;
            case 'J':
                up = true;
                left = true;
                break;
            case 'F':
                down = true;
                right = true;
                break;
            case '0':
                walked = true;
        }
    }
};

vector<vector<Cell>> table;

bool check(int i, int j){
    if (i<0 or i>=m or j<0 or j>=n) return false;
    return true;
}

int DFS(int i, int j, int w){
    Cell& now = table[i][j];
    now.walked = true;

    if (now.up and check(i-1, j) and !table[i-1][j].walked and table[i-1][j].down){
        w = max(w, DFS(i-1, j, w+1));
    }
    if (now.down and check(i+1, j) and !table[i+1][j].walked and table[i+1][j].up){
        w = max(w, DFS(i+1, j, w+1));
    }
    if (now.left and check(i, j-1) and !table[i][j-1].walked and table[i][j-1].right){
        w = max(w, DFS(i, j-1, w+1));
    }
    if (now.right and check(i, j+1) and !table[i][j+1].walked and table[i][j+1].left){
        w = max(w, DFS(i, j+1, w+1));
    }
    return w;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>m>>n;
    table = vector<vector<Cell>>(m, vector<Cell>(n));

    for (int i=0; i<m; i++){
        string s;
        cin>>s;
        for (int j=0; j<n; j++){
            table[i][j] = Cell(s[j]);
        }
    }

    int ans = 0;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (table[i][j].walked) continue;
            ans = max(ans, DFS(i, j, 1));
        }
    }

    cout<<ans;
    return 0;
}
