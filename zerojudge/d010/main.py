def run(N):
    l = []
    for i in range(1,N):
        if N % i == 0:
            l.append(i)
    if N == sum(l):
        print("完全數")
    elif N>sum(l):
        print("虧數")
    elif N<sum(l):
        print("盈數")   

def main():
    try:
        while True:
            N = int(input())
            run(N)
    except:
        return

main()