a, b = list(map(int, input().split()))
n = int(input())
r = 0
for _ in range(n-1):
    table = {}
    text = input()
    nagative = False
    for w in text:
        if w == " ": continue
        if w == 0: break
        if w == "-":
            nagative = True
            continue
        if nagative:
            w = -int(w)
            nagative = False
        if int(w) not in table:
            table[int(w)] = 0
        table[abs(int(w))] += 1 if int(w) > 0 else -1
    if a not in table :
        table[a] = 0
    if b not in table :
        table[b] = 0
    if table[a] > 0 and table[b] > 0:
        r += 1
    print(table)
print(r)