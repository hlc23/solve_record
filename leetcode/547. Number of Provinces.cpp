
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n;
    vector<bool> visted;

    void dfs(int node, vector<vector<int>> &table){
        visted[node] = true;
        for (int i=0; i<n; i++){
            if (!visted[i] and table[node][i] == 1) dfs(i, table);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();
        visted.resize(n, false);
        int ans = 0;
        for (int i=0; i<n; i++){
            if (!visted[i]){
                ans += 1;
                dfs(i, isConnected);
            }
        }
        return ans;
    }
};