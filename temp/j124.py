def f(x:int) -> int:
    n = data[0]
    data.remove(n)
    print(n, end=" ")
    print(data, end=" ")
    if n==0:
        return 0
    global sum
    print(sum)
    if x != -1:
        sum = abs(x-n)
    if n%2:
        return sum+f(x)+f(x)+f(x)
    else: return sum+f(x)+f(x)
sum = 0
data = list(map(int, input().split()))
print(f(-1))