# C. 海龍公式 (Heron's formula)

![敘述](https://i.imgur.com/htmMkSp.png)

## 來源: [NHDK Ten Point Round#18 on Codeforce](https://codeforces.com/group/H0qY3QmnOW/contest/376399/problem/C)

## 解題

### py

```py
inp_text = input().split(" ")
a = int(inp_text[0])
b = int(inp_text[1])
c = int(inp_text[2])
s = (a+b+c)/2
A = (s*(s-a)*(s-b)*(s-c))**0.5
print(int(A))
```

### [官方解](https://youtu.be/tsBYXXV5Pgs?t=319)
