#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> table;
        for (auto i: nums) {
            table[i]++;
        }
        for (auto i: table) {
            if (i.second == 1) return i.first;
        }
        return -1;
    }
};