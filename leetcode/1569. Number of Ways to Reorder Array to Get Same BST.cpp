#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    int MOD = 1e9+7;
    vector<vector<int>> table;
    vector<vector<int>> Pascal_triangle(int n){
        vector<vector<int>> table(n+1);
        for (int i=0; i<=n; i++){
            table[i].resize(i+1);
            table[i][0] = 1;
            table[i][i] = 1;
            for (int j=1; j<i; j++){
                table[i][j] = (table[i-1][j-1] + table[i-1][j]) % MOD;
            }
        }
        return table;
    }

    long long dfs(vector<int> &nums){
        int n = nums.size();
        if (n < 3) return 1;
        int root = nums[0];
        vector<int> left, right;
        for (auto i: nums){
            if (i < root) left.push_back(i);
            else if (i > root) right.push_back(i);
        }

        return (((dfs(left) % MOD * dfs(right) % MOD) % MOD) * table[n - 1][left.size()]) % MOD;
    }

public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        table = Pascal_triangle(n);
        return (dfs(nums)-1) % MOD;
    }
};