c = int(input())
for t in range(c):
    data = input().split(" ")
    for i in range(len(data)):
        data[i] = int(data[i])
    data.sort()
    print("YES" if data[0]+data[1] == data[2] else "NO")