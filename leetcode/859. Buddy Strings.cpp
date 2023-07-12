#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;
        int n = s.size();
        vector<int> cnt(26, 0);
        int diff = 0;
        for (int i = 0; i < n; i++) {
            cnt[s[i] - 'a']++;
            if (s[i] != goal[i]) diff++;
        }
        if (diff == 2) {
            int first = -1, second = -1;
            for (int i = 0; i < n; i++) {
                if (s[i] != goal[i]) {
                    if (first == -1) first = i;
                    else second = i;
                }
            }
            if (s[first] == goal[second] and s[second] == goal[first]) return true;
        }
        else if (diff == 0) {
            for (int i = 0; i < 26; i++) {
                if (cnt[i] > 1) return true;
            }
        }
        return false;
    }
};