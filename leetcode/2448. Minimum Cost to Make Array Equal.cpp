#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n = cost.size();
        vector<pair<long long, long long>> table;

        for (int i = 0; i < nums.size(); i++) {
            table.push_back(make_pair(nums[i], cost[i]));
        }
        sort(table.begin(), table.end());

        vector<long long> prefix_cost(n);
        prefix_cost[0] = table[0].second;
        for (int i = 1; i < n; i++) {
            prefix_cost[i] = table[i].second + prefix_cost[i - 1];
        }

        long long all_cost = 0;
        for (int i = 1; i < n; i++) {
            all_cost += table[i].second * (table[i].first - table[0].first);
        }
        long long answer = all_cost;

        for (int i = 1; i < n; i++) {
            int gap = table[i].first - table[i - 1].first;
            all_cost += prefix_cost[i - 1] * gap;
            all_cost -= gap * (prefix_cost[n - 1] - prefix_cost[i - 1]);
            answer = min(answer, all_cost);
        }

        return answer;
    }
};
