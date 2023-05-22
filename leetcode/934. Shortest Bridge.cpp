#include<bits/stdc++.h>
using namespace std;
struct step{
    int _x, _y, _count;
    step(int x, int y, int count){
        _x = x;
        _y = y;
        _count = count;
    }
    void print(){
        cout<<_x<<" "<<_y<<" "<<_count<<"\n";
    }
};

class Solution {
public:

    void debug(vector<vector<int>> &grid){
        cout<<"---grid---\n";
        for (auto rit = grid.begin(); rit != grid.end(); rit++){
            for (auto vit = (*rit).begin(); vit != (*rit).end(); vit++){
                cout<<*vit<<" ";
            }
            cout<<"\n";
        }
        cout<<"----------\n";
    }

    int move[4][4] = {{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(vector<vector<int>> &grid, int x, int y){
        grid[x][y] = 2;
        for (int i=0; i<4; i++){
            int tx = x+move[i][0],
                ty = y+move[i][1];
            if (
                0 <= tx and 0 <= ty and 
                tx < (int)grid.size() and ty < (int)grid.size() and 
                grid[tx][ty] == 1
            ) dfs(grid, tx, ty);
        }
    }

    int shortestBridge(vector<vector<int>>& grid) {
        bool found = false;
        for (int i=0; i<(int)grid.size(); i++){
            if (found) break;
            for (int j=0; j<grid[0].size(); j++){
                if (grid[i][j]){
                    dfs(grid, i, j);
                    found = true;
                    break;
                }
            }
        }
        // debug(grid);
        queue<step> q;
        for (int i=0; i<(int)grid.size(); i++){
            for (int j=0; j<(int)grid.size(); j++){
                if (grid[i][j] == 2) q.push(step(i, j, 0));
            }
        }
        while (!q.empty()){
            step p = q.front();
            p.print();
            // cout<<p.x<<" "<<p.y<<" "<<p.count<<"\n";
            q.pop();
            int x = p._x,
                y = p._y,
                c = p._count;
            for (int i=0; i<4; i++){
                int tx = x+move[i][0],
                    ty = y+move[i][1];
                if (
                0 <= tx and 0 <= ty and 
                tx < (int)grid.size() and ty < (int)grid[0].size()
                ){
                    if (grid[tx][ty] == 0){
                        grid[tx][ty] = 2;
                        q.push(step(tx, ty, c+1));
                    }
                    else if (grid[tx][ty] == 1) return c;
                }
            }
        }
        return -1;
    }
};