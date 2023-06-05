#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        float x0 = coordinates[0][0],
            y0 = coordinates[0][1],
            x1 = coordinates[1][0],
            y1 = coordinates[1][1];
        if (y0 == y1){
            for (int i=1; i<n; i++){
                if (coordinates[i][1] != y0) return false;
            }
        }
        else{
            float slope = (x1 - x0) / (y1 - y0);
            for (int i=1; i<n; i++){
                if ((coordinates[i][0] - x0) / (coordinates[i][1] - y0) != slope) return false;
            }
        }
        return true;
    }
};