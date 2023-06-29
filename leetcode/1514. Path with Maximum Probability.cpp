#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<double> pt(n, 0);
        pt[start] = 1;
        for (int i=0; i<n-1; i++){
            bool update = false;
            for (int j=0; j<edges.size(); j++){
                int u = edges[j][0], 
                    v = edges[j][1];
                double p = succProb[j];
                if (pt[u] * p > pt[v]){
                    pt[v] = pt[u] * p;
                    update = true;
                }
                if (pt[v] * p > pt[u]){
                    pt[u] = pt[v] * p;
                    update = true;
                }
            }
            if (!update) break;
        }

        return pt[end];
    }
};