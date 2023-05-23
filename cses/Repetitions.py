s = input()
table = [1] * len(s)
for i in range(len(s)-1):
    if s[i] == s[i+1]:
        table[i+1] = table[i]+1
ans = -1
for i in table:
    ans = max(ans, i)
print(ans)