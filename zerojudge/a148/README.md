# a148:You Cannot Pass?!

## 敘述

你考了 n 科筆試題目，每科的滿分都是 100 分。老師說，如果平均大於 59 你就過關了。
								

## 說明

輸入:

輸入第一行為一個數字 n，接著有 n 個正整數。

---

輸出:

若你被當了，請輸出「yes」，否則輸出「no」。

## 範例
範例1

```
輸入:
1 60
3 0 80 75
5 61 61 61 61 55
---

輸出:
no
yes
no

```

## 程式碼
cpp

```cpp
#include <iostream>
using namespace std;

int main() {
    int n ,score;
    float o;
    while (cin>>n){
        o = 0;
        for (int t = 0;t<n;t++){
            cin>>score;
            o += score;
        }
        o /= n;

        if (o > 59){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }

    return 0;
}


```

## 標籤
- 數學


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a148/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a148)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.24 12點49分
