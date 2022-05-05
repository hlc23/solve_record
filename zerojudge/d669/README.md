# d669:11677 - Alarm Clock

## 敘述

Daniela 在一家大醫院當護士，工作時間常變來變去。更糟的是她睡得很沉，鬧鐘很難叫醒她。最近她收到了一個有多種鬧鈴聲的數位時鐘，希望它可以解決她的問題。由於近來較為疲累，她希望善用休息時間。她隨身帶著這個鬧鐘，只要有休息時間，她就設好該醒來的時間並試著入睡。不過當她越焦急地想睡著，她越是睡不著。她一直苦惱地想知道如果她可以立刻睡著，在鬧鐘響以前她可以有幾分鐘的睡眠。但是她的算術不好，所以請你寫一個程式，根據現在的時間及鬧鈴的時間算出她可以睡幾分鐘。


## 說明

輸入:

輸入含有多筆測資，每筆測資一行，含有四個整數 h1、m1、h2 及 m2，h1:m1代表現在的時與分，h2:m2則代表鬧鈴所設的時間 (時與分)，(0≤h1≤23, 0≤m1≤59, 0≤h2≤23, 0≤m2≤59)。最後一行含有四個以空格分開的 0，代表輸入的結束。

---

輸出:

對於每筆測資，你的程式要把 Daniela 可以睡的分鐘數單獨輸出於一行。

## 範例
範例1

```
輸入:
1 5 3 5
23 59 0 34
21 33 21 10
0 0 0 0
---

輸出:
120
35
1417
```

## 程式碼
cpp


在讀取main.cpp時編碼錯誤

py

```py
def h2m(h:int):
    return h*60
def main():

    while True:
        i = input()
        i = i.split(" ")
        h1 = int(i[0])
        m1 = int(i[1])
        h2 = int(i[2])
        m2 = int(i[3])
        M1 = h2m(h1)+m1
        M2 = h2m(h2)+m2
        if M1 == 0 and M2 == 0:
            continue
        if M1 > M2:
            print(M2+1440-M1)
        else:
            print(M2-M1)

main()
```

## 標籤

無

## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d669/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d669/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d669)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.5.5 14點42分
