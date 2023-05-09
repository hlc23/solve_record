class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        x = len(matrix)
        y = len(matrix[0])
        ans = []
        i = 0
        j = 0
        while i < x and j < y:
            # right
            for k in range(j, y):
                ans.append(matrix[i][k])
            i += 1
            # down
            for k in range(i, x):
                ans.append(matrix[k][y-1])
            y -= 1
            # left
            if i < x:
                for k in range(y-1, j-1, -1):
                    ans.append(matrix[x-1][k])
                x -= 1
            # up
            if j < y:
                for k in range(x-1, i-1, -1):
                    ans.append(matrix[k][j])
                j += 1
        return ans
    
