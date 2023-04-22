# 一個RE, 不確定原因
from sys import setrecursionlimit
MAX = 10000
setrecursionlimit(int(MAX))

N = int(input())

table = [[] for _ in range(N)]
depth = [0] * N
max_depth = -1
fn = -1

def DFS(node, parent):
    global table, depth, max_depth, fn
    depth[node] = depth[parent] + 1
    if depth[node] > depth[fn]:
        fn = node
    for child in table[node]:
        if child != parent:
            DFS(child, node)


for _ in range(N-1):
    a, b = list(map(int, input().split()))
    table[a].append(b)
    table[b].append(a)
DFS(0, -1)
depth = [0] * N
DFS(fn, -1)
print(depth[fn]-1)
