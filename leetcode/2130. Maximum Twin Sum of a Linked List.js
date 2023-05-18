/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
var pairSum = function(head) {
    let vals = new Array;
    while (head){
        vals.push(head.val);
        head = head.next;
    }
    let ans = -1;
    for (let i=0; i<vals.length/2; i++){
        ans = ans > vals[i]+vals[vals.length-i-1] ? ans: vals[i]+vals[vals.length-i-1]
    }
    return ans;
};