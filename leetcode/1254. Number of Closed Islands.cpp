class Solution {
public:

    int x_len, y_len;
    int x_move[4] = {1, -1, 0, 0},
        y_move[4] = {0, 0, 1, -1};

    void DFS(int x, int y, vector<vector<int> >& grid){
        // 保證grid[x][y]為陸地
        grid[x][y] = 1;
        for (int i=0; i<4; i++){
            int tx = x + x_move[i],
                ty = y + y_move[i];
            if (tx >= 0 and tx < x_len and ty >= 0 and ty < y_len and grid[tx][ty] == 0)
                DFS(tx, ty, grid);
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        // 計算二維陣列長寬
        x_len = grid.size();
        y_len = grid[0].size();
        // 移除邊界的陸地及其相連的陸地
        for (int x=0; x<x_len; x++){
            for (int y=0; y<y_len; y++){
                if ((x == 0 or y == 0 or x == x_len-1 or y == y_len-1) and grid[x][y] == 0)
                    DFS(x, y, grid);
            }
        }
        // 計算剩餘的島嶼數量
        int ans = 0;
        for (int x=0; x<x_len; x++){
            for (int y=0; y<y_len; y++){
                if (grid[x][y] == 0){
                    ans++;
                    DFS(x, y, grid);
                }
            }
        }
        return ans;

    }
};