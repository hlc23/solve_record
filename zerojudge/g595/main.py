n = int(input())
data = list(map(int, input().split()))
r = 0
for i in range(n):
    if i == 0:
        if data[0] == 0:
            r += data[1]
            continue
    if i == n-1:
        if data[i] == 0:
            r += data[-2]
            continue
    if data[i] == 0:
        r += min(data[i-1], data[i+1])
print(r)
