#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> has_parent(n, false);
        for(auto edge: edges){
            has_parent[edge[1]] = true;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++){
            if(!has_parent[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};