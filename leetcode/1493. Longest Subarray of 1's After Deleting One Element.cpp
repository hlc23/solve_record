#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count = 0;
        int longest = 0;
        int start = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) count++;

            while (count > 1) {
                if (nums[start] == 0) count--;
                start++;
            }

            longest = max(longest, i - start);
        }

        return longest;
    }
};