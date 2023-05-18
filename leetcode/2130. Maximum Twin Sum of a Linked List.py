# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        vals = []
        while head:
            vals.append(head.val)
            head = head.next
        ans = -1
        n = len(vals)-1
        for i in range(n):
            print(i, n-i)
            ans = max(ans, vals[i] + vals[n-i])
        return ans