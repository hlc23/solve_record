# c022:10783 - Odd Sum

## 敘述

給你一個範圍 a 到 b ，請你找出 a 與 b 之間所有奇數的和。例如：範圍 [3, 9] 中所有奇數的和就是 3 + 5 + 7 + 9 = 24 。


## 說明

輸入:

輸入的第一列有一個整數 T （1≦T≦100），代表以下有多少組測試資料。  每組測試資料為兩列，包含兩個數 a 與 b （0≦a≦b≦100）。

---

輸出:

每組測試資料輸出一列，內容為 a 及 b 間所有奇數的和。

## 範例
範例1

```
輸入:
2
1
5
3
5
---

輸出:
Case 1: 9
Case 2: 8
```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case, a, b, sum, case_num = 1;
    cin>>test_case;
    for (int t = 0; t<test_case; t++){
        sum = 0;
        for (cin>>a>>b; a<=b; a++){
            if (a%2 == 1){
                sum += a;
            }
        }
        cout<<"Case "<<case_num<<": "<<sum<<endl;
        case_num ++;
    }
    return 0;
}

```

## 標籤

無

## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c022/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c022)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.21 12點21分44秒
