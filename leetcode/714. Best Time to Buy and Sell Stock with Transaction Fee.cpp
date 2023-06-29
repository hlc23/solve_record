#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<int> buy(n, 0), sell(n, 0);
        sell[0] = -prices[0];
        for (int i=1; i<n; i++){
            buy[i] = max(buy[i-1], sell[i-1]+prices[i]-fee);
            sell[i] = max(sell[i-1], buy[i-1]-prices[i]);
        }

        return buy[n-1];
    }
};