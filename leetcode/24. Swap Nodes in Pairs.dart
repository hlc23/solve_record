/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode? next;
 *   ListNode([this.val = 0, this.next]);
 * }
 */
class ListNode {
  int val;
  ListNode? next;
  ListNode([this.val = 0, this.next]);
}

class Solution {
  ListNode? swapPairs(ListNode? head) {
    if (head == null || head.next == null) return head;
    ListNode? n1 = head, n2 = head.next;
    n1.next = swapPairs(n2!.next);
    n2.next = n1;
    return n2;
  }
}
