class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        # Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

        list_len = 0
        node = head
        while node:
            list_len += 1
            node = node.next
        n1 = n2 = head
        for _ in range(k - 1):
            n1 = n1.next
        for _ in range(list_len - k):
            n2 = n2.next
        # now the n1 and n2 are the kth node from the beginning and the kth node from the end
        n1.val, n2.val = n2.val, n1.val
        return head