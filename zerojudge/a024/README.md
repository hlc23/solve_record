# a024:最大公因數(GCD)

## 敘述

給定兩個整數，請求出它們的最大公因數


## 說明

輸入:

輸入包含兩個整數，以空白鍵隔開，兩個整數均 大於 0, 小於 $2^{31}$

---

輸出:

輸出兩個整數的最大公因數

## 範例
範例1

```
輸入:
12 15

---

輸出:
3

```
範例2

```
輸入:
1 100

---

輸出:
1

```

## 程式碼
py

```py
def GCD(a,b):
    n = a%b
    if n == 0:
        return b
    else:
        return GCD(b,n)

inp_text = input().split(" ")
print(GCD(int(inp_text[0]),int(inp_text[1])))

```

## 標籤
- GCD
- 數學
- 最大公因數
- 迴圈


## 連結
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a024/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a024)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.23 00點03分46秒
