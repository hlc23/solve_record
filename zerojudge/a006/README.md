
# a006:一元二次方程式

## 敘述

求一元二次方程式 ax2+bx+c=0 的根

## 說明

輸入:

每組輸入共一行，內含三個整數 a, b, c 以空白隔開。

---

輸出:

Two different roots x1=?? , x2=??
Two same roots x=??
No real root
PS: 答案均為整數，若有兩個根則大者在前
## 範例


範例1

```text
輸入:
1 3 -10

---

輸出:
Two different roots x1=2 , x2=-5
```

範例2

```text
輸入:
1 0 0

---

輸出:
Two same roots x=0
```

範例3

```text
輸入:
1 1 1

---

輸出:
No real root
```

## 程式碼
    
py

```py
﻿# https://zerojudge.tw/ShowProblem?problemid=a006
inp = input().split(" ")

a = float(inp[0])
b = float(inp[1])
c = float(inp[2])

R = b**2-4*a*c

if R > 0:
    x1 = int((-1*b+R**0.5)/2*a)
    x2 = int((-1*b-R**0.5)/2*a)

    if x1 > x2:
        print(f"Two different roots x1={x1} , x2={x2}")
    else:
        print(f"Two different roots x1={x2} , x2={x1}")
elif R == 0:
    x1 = int(((-1*b)/(2*a)))
    print(f"Two same roots x={x1}")
else:
    print("No real root")

```

## 標籤

- 數學


## 連結
- GitHub: [Python程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a006/main.py)

- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a006)
## [回首頁](https://henryleecode23.github.io/solve_record/)