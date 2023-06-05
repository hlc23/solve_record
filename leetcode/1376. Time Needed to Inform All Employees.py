from typing import List, Dict
class Solution:
    
    def dfs(self, node):
        if node not in self.table:
            return 0
        r = 0
        for sub in self.table[node]:
            r = max(r, self.dfs(sub))
        return self.informTime[node] + r


    def numOfMinutes(self, n: int, headID: int, manager: List[int], informTime: List[int]) -> int:
        self.informTime = informTime
        self.table = {}
        for i, mgr in enumerate(manager):
            if mgr not in self.table:
                self.table[mgr] = []
            self.table[mgr].append(i)

        
        return self.dfs(headID)
