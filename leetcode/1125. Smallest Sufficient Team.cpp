#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        vector<int> ans;
        int n = req_skills.size();
        int m = people.size();
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++) mp[req_skills[i]] = i;
        vector<int> skills(m, 0);
        for(int i=0; i<m; i++){
            for(auto s: people[i]){
                skills[i] |= (1<<mp[s]);
            }
        }
        vector<int> dp(1<<n, INT_MAX);
        vector<vector<int>> parent(1<<n);
        dp[0] = 0;
        for(int i=0; i<m; i++){
            for(int j=(1<<n)-1; j>=0; j--){
                if(dp[j] == INT_MAX) continue;
                int new_skill = j | skills[i];
                if(dp[new_skill] > dp[j] + 1){
                    dp[new_skill] = dp[j] + 1;
                    parent[new_skill] = parent[j];
                    parent[new_skill].push_back(i);
                }
            }
        }
        return parent[(1<<n)-1];
        
    }
};