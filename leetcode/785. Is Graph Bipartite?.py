class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        n = len(graph)
        colors = [-1] * n 

        for i in range(n):
            if colors[i] == -1: 
                queue = deque([i])
                colors[i] = 0 

                while queue:
                    node = queue.popleft()
                    for neighbor in graph[node]:
                        if colors[neighbor] == -1: 
                            colors[neighbor] = 1 - colors[node]
                            queue.append(neighbor)
                        elif colors[neighbor] == colors[node]:  
                            return False

        return True