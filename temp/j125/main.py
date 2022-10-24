# NA
n = int(input())
path = [[-1 for _ in range(n)] for _ in range(n)]
space = [list(map(lambda x: int(x), input().split())) for _ in range(n)]
queue = [(0, 0)]
h = min(abs(space[0][1] - space[0][0]), abs(space[1][0] - space[0][0]))
path[0][0] = 0
BFS = True

print(h)
while BFS:

    # inp = input()
    
    if len(queue) == 0:
        path = [[-1 for _ in range(n)] for _ in range(n)]
        path[0][0] = 0
        queue.append((0, 0))
        h+=1
        # print("================================")
        # print("Restart")
        # print(f"h:{h}")


    for p in queue:
        # inp = input()
        # print(p)

        if (n-1, n-1) in queue:
            BFS = False
            break

        x, y = p[0], p[1]

        if not x-1 < 0: # left exist
            if path[y][x-1] == -1: # didn't check
                if abs(space[y][x-1] - space[y][x]) <= h: # can walk
                    queue.append((x-1, y)) # add
                    path[y][x-1]= path[y][x]+1
                    # print(f"add ({x-1}, {y})")

        if not x+1 >= n: # right exist
            if path[y][x+1] == -1: # didn't check
                if abs(space[y][x+1] - space[y][x]) <= h: # can walk
                    queue.append((x+1, y)) # add
                    path[y][x+1] = path[y][x]+1
                    # print(f"add ({x+1}, {y})")

        if not y-1 < 0: # up exist
            if path[y-1][x] == -1: # didn't check
                if abs(space[y-1][x] - space[y][x]) <= h: # can walk
                    queue.append((x, y-1)) # add
                    path[y-1][x] = path[y][x]+1
                    # print(f"add ({x}, {y-1})")
        
        if not y+1 >= n: # down exist
            if path[y+1][x] == -1: # didn't check
                if abs(space[y+1][x] - space[y][x]) <= h: # can walk
                    queue.append((x, y+1)) # add
                    path[y+1][x] = path[y][x]+1
                    # print(f"add ({x}, {y+1})")

        queue.remove(p)

        # print(queue)
        # for i in range(n):
        #     for j in range(0, n-1):
        #         print(path[i][j], end=" ")
        #     print(path[i][-1])

print(h)
print(path[n-1][n-1])
