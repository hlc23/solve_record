/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var swapNodes = function(head, k) {
    let n1 = head,
        n2 = head, 
        temp;
    for (let i=1; i<k; i++) n1 = n1.next;
    temp = n1;
    while (temp.next != null){
        temp = temp.next;
        n2 = n2.next;
    }
    [n1.val, n2.val] = [n2.val, n1.val];
    return head;
};