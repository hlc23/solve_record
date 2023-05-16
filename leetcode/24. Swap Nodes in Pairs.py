from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if (not head or not head.next):
            return head
        n1 = head
        n2 = head.next
        n1.next = self.swapPairs(n2.next)
        n2.next = n1
        return n2

        