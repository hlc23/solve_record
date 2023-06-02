#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> table;

    int dfs(int node, vector<bool> &visted){
        int ans = 1;
        visted[node] = true;
        for (auto i: table[node]){
            if (!visted[i]) ans += dfs(i, visted);
        }

        return ans;
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        table.resize(n, vector<int>());
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i == j) continue;
                long long 
                x1 = bombs[i][0],
                y1 = bombs[i][1],
                r1 = bombs[i][2],
                x2 = bombs[j][0],
                y2 = bombs[j][1],
                r2 = bombs[j][2];

                if (abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2) <= r1*r1)
                    table[i].push_back(j);
            }
        }

        int ans = 0;
        for (int i=0; i<n; i++){
            vector<bool> visted(n, false);
            ans = max(ans, dfs(i, visted));
        }

        return ans;
    }
};
