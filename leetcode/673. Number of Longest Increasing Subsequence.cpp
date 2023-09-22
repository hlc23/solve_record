#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1), count(n, 1);
        int maxLen = 1, ans = 0;

        for (int i=0; i<n; i++){
            for (int j=0; j<i; j++){
                if (nums[j] < nums[i]) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        count[i] = 0;
                    }
                    if (dp[j] + 1 == dp[i]) {
                        count[i] += count[j];
                    }
                }
            }
        }

        int max_n = *max_element(dp.begin(), dp.end());
        int result = 0;

        for (int i = 0; i < n; i++) {
            if (dp[i] == max_n) {
                result += count[i];
            }
        }

        return result;

    }
};
