#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int i=0; i<nums.size(); i++){
            if (mp.count(nums[i])){
                mp[nums[i]]++;
            }
            else{
                mp[nums[i]] = 1;
            }
        }
        vector<pair<int, int>> table;
        for (auto it = mp.begin(); it != mp.end(); it++){
            table.push_back(make_pair(it->second, it->first));
        }
        sort(table.begin(), table.end(), greater<pair<int, int>>());
        vector<int> ans;
        for (int i=0; i<k; i++){
            ans.push_back(table[i].second);
        }
        return ans;
    }
};