import 'dart:math';

class Solution {
  int maxUncrossedLines(List<int> nums1, List<int> nums2) {
    int n1 = nums1.length, n2 = nums2.length;
    List<List<int>> table =
        List.generate(n1 + 1, (index) => List.generate(n2 + 1, (index) => 0));
    for (int i = 1; i < n1 + 1; i++) {
      for (int j = 1; j < n2 + 1; j++) {
        if (nums1[i - 1] == nums2[j - 1])
          table[i][j] = 1 + table[i - 1][j - 1];
        else
          table[i][j] = max(table[i - 1][j], table[i][j - 1]);
      }
    }
    return table[n1][n2];
  }
}
