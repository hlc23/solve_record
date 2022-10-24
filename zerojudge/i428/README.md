# i428:1. 巴士站牌

## 敘述

平面上有 $n$ 個巴士站，第 $i$ 個巴士站的位置可以用座標點 $(x_i, y_i)$ 來表示。
兩個巴士站之間行進的時間是這兩個巴士站座標的曼哈頓距離。曼哈頓距離的定義如下：對於兩個座標點 $(x_1, y_1)$ 與 $(x_2, y_2)$，兩點之間曼哈頓距離的為 $|x_1-x_2| + |y_1 - y_2|$。
你今天要從的巴士站 $1$ 坐車到巴士站 $n$，中間依序經過巴士站 $2, 3, 4, \cdots, (n-1)$。
請計算過程中相鄰兩站的行進時間的 最大值 與 最小值。


## 說明

輸入:

第 $1$ 行有一個正整數 $n$ 表示路程中總共會經過幾個巴士站。在輸入的第 $2$ 行到第 $n+1$ 行，每行有兩個整數標示巴士站的座標。嚴格的說，輸入第 $i+1$ 行的兩個數字依序是 $x_i$ 和 $y_i$。
子題配分：- $(60\%)$：$n = 4 $ 且 $-100 \leq x_i, y_i \leq 100$- $(40\%)$：$4 \leq n \leq 100$ 且 $-100 \leq x_i, y_i \leq 100$

---

輸出:

在一行輸出兩個整數並以空格分開。第一個整數表示相鄰兩站的行進時間的 最大值。第二個整數表示相鄰兩站的行進時間的 最小值。

## 範例
範例1

```
輸入:
4
1 1
1 3
4 5
2 6
---

輸出:
5 2

```
範例2

```
輸入:
4
1 2
-1 -1
1 3
0 0
---

輸出:
6 4

```

## 程式碼
cpp

```cpp
#include<iostream>

void solve(){
    int n, x1, y1, x2, y2, max_l=0, min_l=999999999;
    std::cin>>n;
    std::cin>>x1>>y1;
    for (int i=0; i<n-1; i++){
        std::cin>>x2>>y2;
        max_l = std::max(std::abs(x1-x2)+std::abs(y1-y2), max_l);
        min_l = std::min(std::abs(x1-x2)+std::abs(y1-y2), min_l);
        x1 = x2; y1 = y2;
    }
    std::cout<<max_l<<" "<<min_l;
}

int main(){
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
    solve();
}

```

py

```py
n = int(input())
x1, y1 = list(map(lambda x:int(x), input().split()))
max_l = 0
min_l = 999999999
for i in range(n-1):
    x2, y2 = list(map(lambda x:int(x), input().split()))
    max_l = max(abs(x1-x2)+abs(y1-y2), max_l)
    min_l = min(abs(x1-x2)+abs(y1-y2), min_l)
    x1, y1 = x2, y2
print(max_l, min_l)
```

## 標籤
- APCS
- 計算幾何


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/i428/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/i428/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=i428)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-25 00:08:18