from typing import List

class Solution:
    def dfs(self, node: int) -> None:
        self.visted[node] = True
        for i, status in enumerate(self.table[node]):
            if (status == 1 and self.visted[i] is False):
                self.dfs(i)

    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        self.n = len(isConnected)
        self.visted = [False for _ in range(len(isConnected))]
        self.table = isConnected

        ans = 0
        for i in range(self.n):
            if self.visted[i] is True:
                continue
            ans += 1
            self.dfs(i)
        
        return ans