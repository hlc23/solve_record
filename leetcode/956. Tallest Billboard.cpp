#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        unordered_map<int, int> dp;
        dp[0] = 0;

        for (int r : rods) {
            unordered_map<int, int> new_dp = dp;
            for (auto it = dp.begin(); it != dp.end(); ++it) {
                int diff = it->first;
                int taller = it->second;
                int shorter = taller - diff;

                new_dp[diff + r] = max(new_dp[diff + r], taller + r);

                int new_diff = abs(shorter + r - taller);
                int new_taller = max(shorter + r, taller);
                new_dp[new_diff] = max(new_dp[new_diff], new_taller);
            }

            dp = new_dp;
        }

        return dp[0];
    }
};
