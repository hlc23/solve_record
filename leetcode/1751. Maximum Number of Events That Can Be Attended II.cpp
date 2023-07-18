#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end());
        int n = events.size();
        vector<int> starts(n);
        for(int i = 0; i < n; i++) {
            starts[i] = events[i][0];
        }
        vector<vector<int>> dp(k + 1, vector<int>(n, -1));
        function<int(int, int)> dfs = [&](int cur_index, int count) {
            if(count == 0 || cur_index == n) {
                return 0;
            }
            if(dp[count][cur_index] != -1) {
                return dp[count][cur_index];
            }
            int next_index = upper_bound(starts.begin(), starts.end(), events[cur_index][1]) - starts.begin();
            dp[count][cur_index] = max(dfs(cur_index + 1, count), events[cur_index][2] + dfs(next_index, count - 1));
            return dp[count][cur_index];
        };
        return dfs(0, k);        
    }
};
// class Solution:
//     def maxValue(self, events: List[List[int]], k: int) -> int:        
//         events.sort()
//         n = len(events)
//         starts = [start for start, end, value in events]
//         dp = [[-1] * n for _ in range(k + 1)]
        
//         def dfs(cur_index, count):
//             if count == 0 or cur_index == n:
//                 return 0
//             if dp[count][cur_index] != -1:
//                 return dp[count][cur_index]

//             # Find the nearest available event after attending event 0.

//             next_index = bisect_right(starts, events[cur_index][1])
//             dp[count][cur_index] = max(dfs(cur_index + 1, count), events[cur_index][2] + dfs(next_index, count - 1))
//             return dp[count][cur_index]
        
//         return dfs(0, k)