#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ans = 0;
        int n = costs.size();
        priority_queue<int, vector<int>, greater<int>> left, right;
        int lp = 0,
            rp = n-1;
        while (k--){
            while (left.size() < candidates and lp <= rp){
                left.push(costs[lp++]); 
            }
            while (right.size() < candidates and rp >= lp){
                right.push(costs[rp--]);
            }

            if (left.empty()){
                ans += right.top();
                right.pop();
            } else if (right.empty()){
                ans += left.top();
                left.pop();
            } else if (left.top() <= right.top()){
                ans += left.top();
                left.pop();
            } else {
                ans += right.top();
                right.pop();
            }
        }
        return ans;
    }
};

int main(){
    cout<<Solution().totalCost(vector<int>()={17,12,10,2,7,2,11,20,8}, 3, 4);
}