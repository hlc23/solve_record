/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var maxUncrossedLines = function(nums1, nums2) {
    let n1 = nums1.length,
        n2 = nums2.length;
    let table = new Array(n1+1).fill(0).map(() => new Array(n2+1).fill(0));
    for (let i = 1; i<n1+1; i++){
        for (let j = 1; j<n2+1; j++){
            if (nums1[i-1] == nums2[j-1]) table[i][j] = 1 + table[i-1][j-1];
            else table[i][j] = Math.max(table[i-1][j], table[i][j-1]);
        }
    }
    return table[n1][n2];
};