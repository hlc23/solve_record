from typing import List
class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        n = len(grid)
        ans = 0
        for c in grid:
            for i in range(n):
                if c == [grid[j][i] for j in range(n)]:
                    ans += 1
        return ans
    
    def equalPairs(self, grid: List[List[int]]) -> int:
        n = len(grid)
        table = {}
        for r in grid:
            table[str(r)] = 0
        for c in zip(*grid):
            if tuple(c) in table:
                table[str(tuple(c))] += 1
        ans = 0
        for k, v in table.items():
            ans += v if v > 1 else 0
        return ans