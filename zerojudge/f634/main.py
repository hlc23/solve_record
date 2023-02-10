table = [[set() for _ in range(3)]]
navy, army, air = 0
officer, sergeant, soldier = 0
tm=0
N, M = map(int, input().split())
for i in range(M):
    name, A, B = map(str, input().split())
    A = int(A)-1
    B = int(B)-1
    if (name in table[A][B]): continue
    else:
        table[A][B].add(name)
        if (A == 0): navy+=1
        elif (A == 1): army+=1
        else: air+=1
        if (B == 0): officer+=1
        elif (B == 1): sergeant+=1
        else: soldier+=1
        tm+=1

print(f"navy:{navy} army:{army} air:{air}")
print(f"officer:{officer} sergeant:{sergeant} soldier:{soldier}")
print(f"survival rate:{round(tm/N*1000)/10}%")