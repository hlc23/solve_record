#include <bits/stdc++.h>
using namespace std;

struct checkpoint{
    int dis;
    pair<int, int> pos;
    map<char, bool> keys;
    checkpoint(pair<int, int> pos, map<char, bool> keys, int dis): pos(pos), keys(keys), dis(dis){}
};

class Solution {
public:
    int shortestPathAllKeys(vector<string>& grid) {
        int n = grid.size(),
            m = grid[0].size();
        set<pair<int, int>> key_set;
        set<pair<int, int>> lock_set;
        pair<int, int> start;
        map<char, bool> key_table;

        for (int x=0; x<n; x++){
            for (int y=0; y<m; y++){
                char cell = grid[x][y];
                switch (cell){
                case 'A'...'F':
                    lock_set.insert(make_pair(x, y));
                    break;
                case 'a'...'f':
                    key_set.insert(make_pair(x, y));
                    key_table.insert(make_pair(cell, false));
                    break;
                case '@':
                    start = make_pair(x, y);
                default:
                    break;
                }
            }
        }

        
        queue<checkpoint> q;
        q.push(checkpoint(start, key_table, 0));
        map<map<char, bool>, set<pair<int, int>>> visited;
        visited.insert(make_pair(key_table, set<pair<int, int>>()));
        int dx[4] = {1, -1, 0, 0},
            dy[4] = {0, 0, 1, -1};


        while (!q.empty()){
            checkpoint c = q.front();
            q.pop();
            int x = c.pos.first,
                y = c.pos.second;
            cout<<"at "<<x<<", "<<y<<endl;
            for (int i=0; i<4; i++){
                int tx = x + dx[i],
                    ty = y + dy[i];
                
                if (tx < 0 or tx >= n or ty < 0 or ty >= m) continue;
                char cell = grid[tx][ty];
                if (cell == '#') continue;
                if ('A' <= cell and cell <= 'F'){
                    if (!c.keys[cell + 32]) continue;
                    cout<<"found key to open "<<cell<<endl;
                }
                if ('a' <= cell and cell <= 'f'){
                    map<char, bool> new_keys = c.keys;
                    new_keys[cell] = true;
                    if (visited.find(new_keys) == visited.end()){
                        visited.insert(make_pair(new_keys, set<pair<int, int>>()));
                    }
                    if (visited[new_keys].find(make_pair(tx, ty)) != visited[new_keys].end()) continue;
                    visited[new_keys].insert(make_pair(tx, ty));

                    bool check = true;
                    for (auto it = new_keys.begin(); it != new_keys.end(); it++){
                        if (!it->second){
                            check = false;
                            break;
                        }
                    }
                    if (check) return c.dis + 1;
                    q.push(checkpoint(make_pair(tx, ty), new_keys, c.dis + 1));
                }
                else{
                    if (visited[c.keys].find(make_pair(tx, ty)) != visited[c.keys].end()) continue;
                    visited[c.keys].insert(make_pair(tx, ty));
                    q.push(checkpoint(make_pair(tx, ty), c.keys, c.dis + 1));
                }
            }
        }
        return -1;
    }
};