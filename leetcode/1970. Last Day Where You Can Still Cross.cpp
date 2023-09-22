#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool BFS(int row, int col, vector<vector<int>>& cells, int mid) {
        vector<vector<int>> table(row, vector<int>(col, 0));
        queue<pair<int, int>> q;
        
        for (int i = 0; i < mid; i++) {
            int x = cells[i][0], y = cells[i][1];
            table[x - 1][y - 1] = 1;
        }
        
        for (int i = 0; i < col; i++) {
            if (!table[0][i]) {
                q.push({0, i});
                table[0][i] = -1;
            }
        }

        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            if (x == row - 1) {
                return true;
            }
            
            for (pair<int, int> dir : d) {
                int tx = x + dir.first,
                    ty = y + dir.second;
                
                if (tx >= 0 and tx < row and ty >= 0 and ty < col and table[tx][ty] == 0) {
                    table[tx][ty] = -1;
                    q.push(make_pair(tx, ty));
                }
            }
        }
        
        return false;
    }
    
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int left = 1;
        int right = row * col;
        
        while (left <= right) {
            int mid = (right + left) / 2;
            if (BFS(row, col, cells, mid)) left = mid + 1;
            else right = mid - 1;
        }

        return right;
    }
};
