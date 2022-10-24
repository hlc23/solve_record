n = int(input())
x1, y1 = list(map(lambda x:int(x), input().split()))
max_l = 0
min_l = 999999999
for i in range(n-1):
    x2, y2 = list(map(lambda x:int(x), input().split()))
    max_l = max(abs(x1-x2)+abs(y1-y2), max_l)
    min_l = min(abs(x1-x2)+abs(y1-y2), min_l)
    x1, y1 = x2, y2
print(max_l, min_l)