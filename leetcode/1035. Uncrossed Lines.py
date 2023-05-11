class Solution:
    def maxUncrossedLines(self, nums1: List[int], nums2: List[int]) -> int:
        n1 = len(nums1)
        n2 = len(nums2)
        table = [[-1 for _ in range(n2+1)] for _ in range(n1+1)]
        for i in range(n1+1):
            table[i][0] = 0
        for j in range(n2+1):
            table[0][j] = 0
        for i in range(1, n1+1):
            for j in range(1, n2+1):
                if nums1[i-1] == nums2[j-1]:
                    table[i][j] = 1 + table[i-1][j-1]
                else:
                    table[i][j] = max(table[i-1][j], table[i][j-1])
        
        return table[n1][n2]
