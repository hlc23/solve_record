#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int largest = 0, n = 0;
        for (auto i: gain){
            n += i;
            largest = max(largest, n);
        }
        return largest;
    }
};