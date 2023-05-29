from typing import List

class Solution:

    def minCost(self, n: int, cuts: List[int]) -> int:
        cuts.append(0)
        cuts.append(n)
        cuts.sort()

        dp = [[0] * len(cuts) for _ in range(len(cuts))]

        for l in range(2, len(cuts)):
            for i in range(len(cuts) - l):
                j = i + l
                dp[i][j] = float('inf')
                for k in range(i + 1, j):
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + cuts[j] - cuts[i])

        return dp[0][len(cuts) - 1]
