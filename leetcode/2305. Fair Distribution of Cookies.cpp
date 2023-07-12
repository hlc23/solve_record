#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int dfs(int i, vector<int>& table, vector<int>& cookies, int k, int c) {
        if (cookies.size() - i < c) {
            return INT_MAX;
        }
    
        if (i == cookies.size()) {
            return *max_element(table.begin(), table.end());
        }

        int answer = INT_MAX;
        for (int j = 0; j < k; ++j) {
            c -= table[j] == 0 ? 1 : 0;
            table[j] += cookies[i];
            
            answer = min(answer, dfs(i + 1, table, cookies, k, c)); 
            
            table[j] -= cookies[i];
            if (table[j] == 0) {
                c += 1;
            }

        }
        
        return answer;
    }

    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> table(k, 0);
        return dfs(0, table, cookies, k, k);
    }
};