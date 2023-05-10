class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        max_x = n
        max_y = n
        min_x = 0
        min_y = 0
        ans = [[0 for _ in range(n)] for _ in range(n)]
        num = 1
        while (min_x < max_x and min_y < max_y):
            for i in range(min_y, max_y):
                ans[min_x][i] = num
                num += 1
            min_x += 1
            for i in range(min_x, max_x):
                ans[i][max_y-1] = num
                num += 1
            max_y -= 1
            if min_x < max_x:
                for i in range(max_y-1, min_y-1, -1):
                    ans[max_x-1][i] = num
                    num += 1
                max_x -= 1
            if min_y < max_y:
                for i in range(max_x-1, min_x-1, -1):
                    ans[i][min_y] = num
                    num += 1
                min_y += 1
        return ans