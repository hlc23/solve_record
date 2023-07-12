#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<int> table(n - 1, 0);
        for (int i = 0; i < n - 1; ++i) {
            table[i] += weights[i] + weights[i + 1];
        }
        sort(table.begin(), table.end());
        
        long long ans = 0;
        for (int i = 0; i < k - 1; ++i) {
            ans += table[n - 2 - i] - table[i];
        }

        return ans;
    }
};