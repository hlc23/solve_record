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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p1 = head;
        ListNode* p2 = head;
        
        // 移動p1到第k個節點
        for (int i = 1; i < k; i++) {
            p1 = p1->next;
        }
        
        ListNode* tmp = p1;
        
        // 將p1留在第k個節點，同時移動p2到第一個節點
        while (tmp->next != nullptr) {
            tmp = tmp->next;
            p2 = p2->next;
        }
        
        // 交換第k個節點和倒數第k個節點的值
        swap(p1->val, p2->val);
        
        return head;
    }
};