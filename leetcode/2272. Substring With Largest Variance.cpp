#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestVariance(string s) {
        vector<int> table(26, 0);
        for (char ch : s) {
            table[ch - 'a']++;
        }
        int globalMax = 0;
        
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                if (i == j || table[i] == 0 || table[j] == 0) {
                    continue;
                }
                char major = 'a' + i;
                char minor = 'a' + j;
                int majorCount = 0;
                int minorCount = 0;
                
                int restMinor = table[j];
                
                for (char ch : s) {    
                    if (ch == major) {
                        majorCount++;
                    }
                    if (ch == minor) {
                        minorCount++;
                        restMinor--;
                    }
                    
                    if (minorCount > 0)
                        globalMax = max(globalMax, majorCount - minorCount);
                    
                    if (majorCount < minorCount && restMinor > 0) {
                        majorCount = 0;
                        minorCount = 0;
                    }
                }
            }
        }
        
        return globalMax;
    }
};
