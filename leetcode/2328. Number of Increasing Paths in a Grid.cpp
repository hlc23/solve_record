#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n, m;
    int MOD = 1e9+7;
    vector<vector<int>> table;
    int x_move[4] = {1, -1, 0, 0},
        y_move[4] = {0, 0, 1, -1};
    int dfs(vector<vector<int>>& grid, int x, int y){
        if (table[x][y] != -1) return table[x][y];
        int r = 1;
        for (int i=0; i<4; i++){
            int tx = x + x_move[i],
                ty = y + y_move[i];
            if (tx < 0 or ty < 0 or tx >= n or ty >= m) continue;
            if (grid[x][y] < grid[tx][ty]){
                table[tx][ty] = dfs(grid, tx, ty) % MOD;
                r += table[tx][ty];
            }
        }
        return r % MOD;
    }
    
    int countPaths(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        long long ans = 0;
        table.resize(n, vector<int>(m, -1));
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                table[i][j] = dfs(grid, i, j) % MOD;
                ans += table[i][j] % MOD;
                ans %= MOD;
                cout<<table[i][j]<<" ";
            }
            cout<<"\n";
        }
        return ans % MOD;
    }
};


signed main(){
    vector<vector<int>> grid = {{1, 1}, {3, 4}};
    cout<<Solution().countPaths(grid);
}