# zj c396
n, m, k = map(int, input().split())
player = [i for i in range(n)]
tm = m
temp = 0
while (k):
    k-=1
    index = tm % len(player)
    player.remove(player[index])
    temp = index-1
    tm = m + temp

print(player[0] if len(player) == 0 else player[index+1 % len(player)-1])
