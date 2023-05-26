t = int(input())
while (t):
    t-=1
    y, x = map(int, input().split())
    level = max(y, x)

    if (level % 2):
        if(y > x):
            ans = (level-1)**2 + x
        else:
            ans = (level-1)**2 + x + (x-y)
    else:
        if(y > x):
            ans = (level-1)**2 + y + (y-x)
        else:
            ans = (level-1)**2 + y
    print(ans)
