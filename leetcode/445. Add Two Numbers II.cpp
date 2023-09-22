#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;
        while (l1 != nullptr){
            s1.push(l1->val);
            l1 = l1->next;
        }
        while (l2 != nullptr){
            s2.push(l2->val);
            l2 = l2->next;
        }
        int n1 = 0, n2 = 0;
        ListNode* node = new ListNode();
        while (!s1.empty() or !s2.empty()){
            if (!s1.empty()){
                n1 += s1.top();
                s1.pop();
            }
            if (!s2.empty()){
                n1 += s2.top();    
                s2.pop();
            }
            node->val = n1 % 10;
            n2 = n1 / 10;
            ListNode* head = new ListNode(n2);
            head->next = node;
            node = head;
            n1 = n2;
        }
        return node->val == 0 ? node->next : node;
    }
};