#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    const int mod = 1e9 + 7;
    vector<vector<int>> table;
    int solve(vector<int>& locations, int now, int finish, int fuel){
        if(fuel < 0) return 0;
        if(table[now][fuel] != -1) return table[now][fuel];
        int ans = 0;
        if(now == finish) ans++;
        for(int i = 0; i < locations.size(); i++){
            if(i == now) continue;
            ans = (ans + solve(locations, i, finish, fuel - abs(locations[i] - locations[now]))) % mod;
        }
        return table[now][fuel] = ans;
    }

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n = locations.size();
        table.resize(n, vector<int>(fuel + 1, -1));
        return solve(locations, start, finish, fuel);
    }
};