#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(2, 1));
        int ans = 1;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(arr[i] - arr[j] == difference){
                    dp[i][0] = max(dp[i][0], dp[j][0] + 1);
                    ans = max(ans, dp[i][0]);
                }
                if(arr[i] - arr[j] == -difference){
                    dp[i][1] = max(dp[i][1], dp[j][1] + 1);
                    ans = max(ans, dp[i][1]);
                }
            }
        }
        return ans;
    }
};

signed main(){
    vector<int> vec = {1, 2, 3, 4};
    cout<<Solution().longestSubsequence(vec, 1)<<"\n";
    vec = {1, 3, 5, 7};
    cout<<Solution().longestSubsequence(vec, 1)<<"\n";
    vec = {1,5,7,8,5,3,4,2,1};
    cout<<Solution().longestSubsequence(vec, -2)<<"\n";
}