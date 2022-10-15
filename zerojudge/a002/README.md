# a002:簡易加法

## 敘述

請寫一個程式，讀入兩個數字，並求出它們的和。


## 說明

輸入:

每組輸入共一行，內含有兩個整數 a, b，以空白隔開，a, b絕對值皆小於 $10^6$。

---

輸出:

對於每組輸入，輸出該兩整數的和。

## 範例
範例1

```
輸入:
5 10

---

輸出:
15

```
範例2

```
輸入:
1 2

---

輸出:
3

```

## 程式碼
cpp

```cpp
#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    cin>>n1>>n2;
    cout<<n1+n2<<endl;
    return 0;
}
```

py

```py
inp = input().split()
data = [int(n) for n in inp]
print(data[0]+data[1])
```

## 標籤
- 基本輸出輸入


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a002/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a002/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a002)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-16 01:49:07