#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // solution 1
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid[0].size(); j++){
                if (grid[i][j] < 0) ans++;
            }
        }
        return ans;
    }
    
    // solution 2
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0,
            n = grid[0].size();
        
        for (auto r: grid){
            int left = 0, right = n-1, mid;
            while (left <= right){
                mid = (left + right) / 2;
                if (r[mid] < 0) right = mid -1;
                else left = mid +1;
            }
            ans += n - left;
        }
        return ans;
    }

    // solution 3
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0,
            n = grid[0].size(),
            index = n - 1;
        for (auto r: grid){
            while (index >= 0 and r[index] < 0){
                index--;
            }
            ans += n - (index + 1);
        }
        return ans;
    }
};

