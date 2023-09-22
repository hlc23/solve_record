#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> moves = {
            {1, 2}, {1, -2}, {-1, 2}, {-1, -2},{2, 1}, {2, -1}, {-2, 1}, {-2, -1}
    };
    double knightProbability(int n, int k, int row, int column) {
        vector dp(k + 1, vector (n, vector<double>(n, 0.0)));
        dp[0][row][column] = 1;
        for (int m = 1; m <= k; m++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    for (auto md : moves) {
                        int prevI = i - md.first;
                        int prevJ = j - md.second;
                        if (prevI >= 0 and prevI < n and prevJ >= 0 and prevJ < n) {
                            dp[m][i][j] += dp[m - 1][prevI][prevJ] / 8;
                        }
                    }
                }
            }
        }
        double ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans += dp[k][i][j];
            }
        }
        return ans;
    }
};