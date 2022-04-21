# d049:中華民國萬歲！

## 敘述

國父孫中山於 1911 年武昌起義推翻滿清創立中華民國，並訂次年 (1912) 年為中華民國元年。從此國民政府便以中華民國國號記年至今。請寫一程式，將輸入的西元年份轉換成民國年份後輸出。


## 說明

輸入:

輸入僅有一行，其中包含一個西元年份 y (1912 ≤ y ≤ 2147483647)。

---

輸出:

輸出所算出的民國年份。

## 範例
範例1

```
輸入:
2008

---

輸出:
97

```
範例2

```
輸入:
2021

---

輸出:
110

```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin>>y;
    cout<<y-1911>>endl;
    return 0;
}

```

## 標籤
- 變數
- 輸出入
- 運算子


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d049/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d049)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.21 11點44分27秒
