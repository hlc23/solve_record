from collections import defaultdict
from typing import List

class Solution:

    # 定義DFS遞迴函數，計算結果
    def dfs(self, start, end):
        # 如果起點或終點不在圖形中，返回-1.0
        if start not in self.graph or end not in self.graph:
            return -1.0

        # 如果起點和終點相同，返回1.0
        if start == end:
            return 1.0

        # 將起點標記為已訪問
        self.visited.add(start)

        # 對於起點的每個鄰居進行遞迴計算
        for neighbor in self.graph[start]:
            if neighbor not in self.visited:
                # 計算從鄰居到終點的結果
                result = self.dfs(neighbor, end)
                # 如果結果為正數，則返回起點到鄰居的值乘以鄰居到終點的結果
                if result > 0:
                    return self.graph[start][neighbor] * result

        # 如果無法找到路徑，返回-1.0
        return -1.0

    def calcEquation(self, equations, values, queries):
    # 建立圖形，使用鄰接列表的形式存儲變數之間的關係和值
        self.graph = defaultdict(dict)

        # 建立圖形
        for (dividend, divisor), value in zip(equations, values):
            self.graph[dividend][divisor] = value
            self.graph[divisor][dividend] = 1.0 / value

        

        # 對於每個查詢，呼叫DFS函數計算結果
        results = []
        for query in queries:
            start, end = query
            self.visited = set()
            result = self.dfs(start, end)
            results.append(result)

        return results