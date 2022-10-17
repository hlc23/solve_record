c = int(input())
for c in range(c):
    data_len = int(input())
    data = input().split(" ")
    for i in range(data_len):
        data[i] = int(data[i])
    data.sort()
    check = True
    for i in range(1, data_len):
        if data[i-1] < data[i]:
            continue
        else:
            check = False
            break
    if check:
        print("YES")
    else:
        print("NO")