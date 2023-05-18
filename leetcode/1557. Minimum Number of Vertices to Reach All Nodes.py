from typing import List
class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
        has_parent = [False] * n
        for edge in edges:
            has_parent[edge[1]] = True
        ans = []
        for i in range(n):
            if has_parent[i] is False:
                ans.append(i)
        return ans