
# c024:10079 - Pizza Cutting

## 敘述

Pizza大家都吃過吧！我個人是偏愛達美樂Pizza啦！現在問題來了：給你一塊Pizza，如果切一刀可以切成2塊，切2刀最多可切成4塊，切3刀最多可切成7塊（如下圖），那切N刀最多可以切成幾塊呢？ 


## 說明

輸入:

輸入的每一筆測試資料有1個整數N（0 <= N <= 210000000）代表切幾刀。 如果N為負數，代表輸入結束。

---

輸出:

對每一輸入N，輸出切N刀最多可以切成幾塊Pizza。

## 範例
範例1

```
輸入:
5
10
-100
---

輸出:
16
56
```
## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

/*
1刀分2塊
2刀分4塊
3刀分7塊
n刀分n-1刀所分的數量加上n

a1 = 2
a2 = 4
a3 = 7 = a2 + 3
a4 = 11 = a3 + 4
an = a(n-1) +n
an = 2 + 4 + ((n-2)(3+n))/2
*/

int main() {
    long long int N;
    while(cin>>N){
        if (N<0){
            break;
        }
        else if(N == 1){
            cout<<2<<endl;
        }
        else if(N == 2){
            cout<<4<<endl;
        }
        else{
            cout<< 4 + ((N-2)*(3+N))/2<<endl;
        }
    }
    return 0;
}

```

## 標籤

無

## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c024/main.cpp)- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c024

## [回首頁](https://henryleecode23.github.io/solve_record/
))