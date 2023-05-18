import 'dart:ffi';
import 'dart:math';

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
  int pairSum(ListNode? head) {
    List vals = new List.empty(growable: true);
    while (head != null) {
      vals.add(head.val);
      head = head.next;
    }
    int ans = -1;
    for (int i = 0; i < vals.length / 2; i++) {
      ans = max(ans, vals[i] + vals[vals.length - i - 1]);
    }
    return ans;
  }
}
