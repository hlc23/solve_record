# c508:去蟲

## 敘述

給你一個長度為N的序列，請你由小到大排序後輸出在第一行
接著除去掉重複的元素後由大到小輸出至第二行


## 說明

輸入:

第一行 N 代表總共有 N 個數字
第二行即為 N 個數字的序列

---

輸出:



## 範例
範例1

```
輸入:
5
2 2 1 3 4
---

輸出:
1 2 2 3 4
4 3 2 1
```

## 程式碼
py

```py
input()
num = [int(i) for i in input().split()]

print(*sorted(num), '\n', *sorted(set(num), reverse=True))
```

## 標籤

無

## 連結
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c508/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c508)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-09-19 20:21:45