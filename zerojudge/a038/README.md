# a038:數字翻轉

## 敘述

輸入任意數字，並將其數字全部倒轉
 


## 說明

輸入:

輸入一行包含一個整數，且不超過 $2^{31}$

---

輸出:

輸出翻轉過後的數字

## 範例
範例1

```
輸入:
12345

---

輸出:
54321

```
範例2

```
輸入:
5050

---

輸出:
505

```

## 程式碼
cpp

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, output;
    cin>>n;
    while (n>0){
        output = output*10+n%10;
        n = n/10;
    }
    cout<<output;
    return 0;
}
```

## 標籤
- while
- 迴圈


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a038/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a038)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.5.5 14點42分
