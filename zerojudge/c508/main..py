input()
num = [int(i) for i in input().split()]

print(*sorted(num), '\n', *sorted(set(num), reverse=True))