#TLE

def cl(n:int):
    if n==1: return 1
    elif n%2==1: return cl(3*n+1)+1
    else: return cl(n/2)+1

while True:
    try:
        inp = input().split(" ")
        n1 = int(inp[0])
        n2 = int(inp[1])
        t = 0
        for n in range(min(n1, n2), max(n1, n2)+1):
            t = max(t, cl(n))
        print(n1, n2, t)

    except EOFError:
        break