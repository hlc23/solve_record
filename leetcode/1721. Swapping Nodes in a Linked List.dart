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
  ListNode? swapNodes(ListNode? head, int k) {
    ListNode? n1 = head, n2 = head, temp;
    for (int i = 1; i < k; i++) n1 = n1?.next;
    temp = n1;
    while (temp?.next != null) {
      temp = temp?.next;
      n2 = n2?.next;
    }
    int t = n1!.val;
    n1.val = n2!.val;
    n2.val = t;
    return head;
  }
}
