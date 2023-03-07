move_x = [1, -1, 0, 0]
move_y = [0, 0, 1, -1]

N = int(input())
maze = [[None for _ in range(N+1)] for _ in range(N+1)]
visted = [[-1 for _ in range(N+1)] for _ in range(N+1)]

for i in range(1, N+1):
    t = input()
    for w in range(N):
        maze[i][w+1] = 0 if t[w] == "." else 1


# show maze
# for i in range(1, N+1):
#     for j in range(1, N+1):
#         print(maze[i][j], end="")
#     print()

q = []
q.append((2, 2))
visted[2][2] = 1
while len(q) > 0:
    p = q.pop(0)
    x = p[0]
    y = p[1]
    for i in range(4):
        tx = x+move_x[i]
        ty = y+move_y[i]
        if (tx <= 1 or ty <= 1 or tx >= N or ty >= N):
            continue
        if (maze[tx][ty] == 0 and visted[tx][ty] == -1):
            q.append((tx, ty))
            visted[tx][ty] = visted[x][y]+1

# show visted
# for i in range(1, N+1):
    # for j in range(1, N+1):
        # print(visted[i][j], end="")
    # print()

print("No solution!" if visted[N-1][N-1] == -1 else visted[N-1][N-1])