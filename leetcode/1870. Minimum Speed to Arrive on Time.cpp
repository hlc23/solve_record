#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double check(vector<int>& dist, int s){
        double t = 0;
        for (int i=0; i<dist.size(); i++){
            if (i == dist.size()-1) t += (double)dist[i]/s;
            else t += ceil((double)dist[i]/s);
        }
        return t;

    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l = 1, r = 1e9, mid;
        while (l<=r){
            mid = (l+r)/2;
            if (check(dist, mid) <= hour) r = mid-1;
            else l = mid+1;
        }
        if (r == 1e9+1) return -1;
        return r;
    }
};