from typing import List

class Solution:
    def dfs(self, node: int, visted: set):
        ans = 1
        visted.add(node)
        for next_node in self.table[node]:
            if next_node not in visted:
                ans += self.dfs(next_node, visted)
        return ans

    def maximumDetonation(self, bombs: List[List[int]]) -> int:
        len_nodes = len(bombs)
        self.table = [[] for _ in range(len_nodes)]
        # create graph
        for i in range(len_nodes):
            for j in range(len_nodes):
                if i == j:
                    continue
                bomb1 = bombs[i]
                bomb2 = bombs[j]

                x1, y1, r1 = bomb1
                x2, y2, r2 = bomb2

                if (abs(x1-x2)**2 + abs(y1-y2)**2 <= r1 **2):
                    self.table[i].append(j)


        ans = -1
        for i in range(len_nodes):
            visted = set()
            visted.add(i)
            temp = self.dfs(i, visted)
            if temp > ans:
                ans = temp
        
        return ans
    
