from typing import List
class Solution:

    move = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(self, x, y):
        self.grid[x][y] = 2
        for tx, ty in self.move:
            if 0 <= x + tx < len(self.grid) and 0 <= y + ty < len(self.grid[0]) and self.grid[x + tx][y + ty] == 1:
                self.dfs(x + tx, y + ty)

    def shortestBridge(self, grid: List[List[int]]) -> int:
        self.grid = grid
        found = False
        for i in range(len(grid)):
            if found:
                break
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    self.dfs(i, j)
                    found = True
                    break
        queue = []
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 2:
                    queue.append((i, j, 0))
        
        while len(queue):
            x, y , step = queue.pop(0)
            for tx, ty in self.move:
                if 0 <= x + tx < len(self.grid) and 0 <= y + ty < len(self.grid[0]):
                    if self.grid[x + tx][y + ty] == 0:
                        self.grid[x + tx][y + ty] = 2
                        queue.append((x + tx, y + ty, step + 1))
                    elif self.grid[x + tx][y + ty] == 1:
                        return step
