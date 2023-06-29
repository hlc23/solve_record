#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return {};
        if (k == 0) return nums;
        if (k > n) return {};
        vector<int> ans(n, -1);
        vector<long long> prefix(n+1, 0);
        for(int i=0; i<n; i++) {
            prefix[i+1] = prefix[i] + nums[i];
        }
        for(int i=k; i<n-k; i++) {
            ans[i] = (prefix[i+k] - prefix[i] + nums[i]) / k;
        }

        return ans;
    }
};