#include<bits/stdc++.h>
using namespace std;

struct pairs {
    int sum, i, j;
    pairs(int sum, int i, int j) : sum(sum), i(i), j(j) {}
};

struct cmp{
    bool operator()(pairs a, pairs b) {
        return a.sum < b.sum;
    }
};


class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        int n = nums1.size(), m = nums2.size();
        priority_queue<pairs, vector<pairs>, cmp> pq;
        for (auto i : nums1) {
            for (auto j : nums2) {
                if (pq.size() < k) {
                    pq.push(pairs(i + j, i, j));
                } 
                else if (pq.top().sum > i + j) {
                    pq.pop();
                    pq.push(pairs(i + j, i, j));
                }
                else break;
            }
        }

        while (!pq.empty()) {
            pairs p = pq.top();
            pq.pop();
            ans.push_back({p.i, p.j});
        }

        return ans;
    }
};