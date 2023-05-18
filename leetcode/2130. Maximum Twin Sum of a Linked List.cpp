#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> vals;
        ListNode *node = head;
        while (node){
            vals.push_back(node->val);
            node = node->next;
        }
        int n = vals.size();
        int ans = -1;
        for (int i=0; i<n/2; i++){
            ans = max(ans, vals[i]+vals[n-i-1]);
        }
        return ans;
    }
};