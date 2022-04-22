# a147:Print it all

## 敘述

大於 0、整數、不可以被 7 整除、小於 n，請輸出所有可能的數字。
								

## 說明

輸入:

輸入為一個整數 n，其中 n 不大於 10000。若 n = 0 表示資料結束。

---

輸出:

輸出如前述，各個數字之間以一個空白隔開。

## 範例
範例1

```
輸入:
5
10
20
0
---

輸出:
1 2 3 4
1 2 3 4 5 6 8 9
1 2 3 4 5 6 8 9 10 11 12 13 15 16 17 18 19
```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin>>n){
        if (n == 0){
            break;
        }
        for (int t = 1; t<n; t++){
            if (t%7 != 0){
                cout<<t<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

```

py

```py
﻿while True:
    inp_text = int(input())
    if inp_text == 0:
        break
    for n in range(1, inp_text):
        if n%7 != 0:
            print(n,end=" ")
    print("")
```

## 標籤
- if
- 數學
- 窮舉


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a147/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a147/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a147)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.22 07點54分54秒
