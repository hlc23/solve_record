n = int(input())
l = sorted((list(map(int, input().split(" ")))))
find = False
for i in range(n-1):
    if l[i] != i+1:
        print(i+1)
        find = True
        break
if find is False:
    print(n)
