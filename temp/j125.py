# NA TLE
def check(h:int):
	global visited, n, mx, my, area
	visited = [[-1 for _ in range(n)] for _ in range(n)]
	visited[0][0] = 0
	queue = [(0, 0)]
	while len(queue) > 0:
		x, y = queue[0][0], queue[0][1]
		queue.remove((x, y))
		for m in range(4):
			nx, ny = x+mx[m], y+my[m]
			if (nx>=n or nx<0 or ny>=n or ny<0): continue
			if abs(area[nx][ny]-area[x][y]) > h:continue
			if visited[nx][ny] == -1:
				queue.append((nx, ny))
				visited[nx][ny] = visited[x][y]+1
	if visited[n-1][n-1] == -1:return False
	else: return True

n = int(input())
area = []
for i in range(n):
	area.append(list(map(lambda n:int(n), input().split())))

visited = [[-1 for _ in range(n)] for _ in range(n)]
l, r = 0, 1000001
mx = (0, 0, -1, 1)
my = (1, -1, 0, 0)
while l<=r:
	mid = (l+r)//2
	if check(mid): r = mid-1
	else: l = mid+1

visited = [[-1 for _ in range(n)] for _ in range(n)]
visited[0][0] = 0
queue = [(0, 0)]
while len(queue) > 0:
	x, y = queue[0][0], queue[0][1]
	queue.remove((x, y))
	for m in range(4):
		nx, ny = x+mx[m], y+my[m]
		if (nx>=n or nx<0 or ny>=n or ny<0): continue
		if abs(area[nx][ny]-area[x][y]) > l:continue
		if visited[nx][ny] == -1:
			queue.append((nx, ny))
			visited[nx][ny] = visited[x][y]+1

print(f"{l}\n{visited[n-1][n-1]}")