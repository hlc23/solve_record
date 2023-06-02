from typing import List

class Solution:

    move_x = [1, 1, -1, -1, 0, 0, 1, -1]
    move_y = [1, -1, 1, -1, 1, -1, 0, 0]

    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        if (grid[0][0] == 1):
            return -1
        if (grid[-1][-1] == 1):
            return -1
        n = len(grid)
        queue = [(0, 0, 1)]
        while queue:
            x, y, dist = queue.pop(0)
            if x == n - 1 and y == n - 1:
                return dist
            for i in range(8):
                next_x = x + self.move_x[i]
                next_y = y + self.move_y[i]
                if (
                    0 <= next_x and next_x < n and
                    0 <= next_y and next_y < n and
                    grid[next_x][next_y] == 0
                ):
                    queue.append((next_x, next_y, dist + 1))
                    grid[next_x][next_y] = dist + 1
        return grid[n-1][n-1] if grid[n - 1][n - 1] else -1
