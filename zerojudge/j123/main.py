inp = list(map(lambda n: int(n), input().split()))
R, C, n = inp
full = [0 for _ in range(R)]
p = 0
b = 0
for i in range(n):
    inp = input().split()
    t = inp[0]
    l = int(inp[1])
    if t == "A":
        f = max(full[l], full[l+1], full[l+2], full[l+3])
        if (f+1 <= C):
            full[l] = f+1
            full[l+1] = f+1
            full[l+2] = f+1
            full[l+3] = f+1
            p+=1
            b+=4
        continue
    if t == "B":
        f = full[l]
        if f+3 <= C:
            full[l] = f+3
            p+=1
            b+=3
        continue
    if t == "C":
        f = max(full[l], full[l+1])
        if f+2 <= C:
            full[l] = f+2
            full[l+1] = f+2
            p+=1
            b+=4
        continue
    if t == "D":
        f = max(full[l]-2, full[l+1])
        if f+3 <= C:
            full[l] = f+3
            full[l+1] = f+3
            p+=1
            b+=4
    if t == "E":
        f = max(full[l]-1, full[l+1], full[l+2])
        if f+2<= C:
            full[l] = f+2
            full[l+1] = f+2
            full[l+2] = f+2
            p+=1
            b+=5
print(R*C-b, n-p)