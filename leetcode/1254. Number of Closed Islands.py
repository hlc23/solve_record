class Solution:
    def DFS(self, x, y, grid):
        # 邊界檢查
        # 確定是在範圍內
        # if x < 0 or x > self.x_len - 1 or y < 0 or y > self.y_len - 1:
        #     return
        self.x_move = [1, -1, 0, 0]
        self.y_move = [0, 0, 1, -1]
        
        # 將目前檢查的格子標記為已經檢查過
        grid[x][y] = 1
        # 檢查四個方向
        for i in range(4):
            tx = x + self.x_move[i]
            ty = y + self.y_move[i]
            # 如果超出範圍或是遇到海洋，則跳過
            if tx < 0 or tx > self.x_len - 1 or ty < 0 or ty > self.y_len - 1 or grid[tx][ty] == 1:
                continue
            self.DFS(tx, ty, grid)
    
    def closedIsland(self, grid: List[List[int]]) -> int:
        # 計算長寬
        self.x_len = len(grid)
        self.y_len = len(grid[0])
        # 移除邊界的陸地及其相連的陸地
        # 這樣就只剩下孤島了
        for x in range(self.x_len):
            for y in range(self.y_len):
                if (x == 0 or y == 0 or x == self.x_len - 1 or y == self.y_len - 1) and grid[x][y] == 0:
                    # 在做DFS時會將相連的陸地標記為海洋(也就是檢查過)
                    self.DFS(x, y, grid)
        count = 0
        # 計算孤島的數量
        for x in range(self.x_len):
            for y in range(self.y_len):
                if grid[x][y] == 0:
                    count += 1
                    self.DFS(x, y, grid)
        return count