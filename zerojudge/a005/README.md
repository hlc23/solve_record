# a005:Eva 的回家作業

## 敘述

　　Eva的家庭作業裏有很多數列填空練習。填空練習的要求是：已知數列的前四項，填出第五項。因 為已經知道這些數列只可能是等差或等比數列，她決定寫一個程式來完成這些練習。


## 說明

輸入:

第一行是數列的數目t（0 <= t <= 20）。 以下每行均包含四個整數，表示數列的前四項。 約定數列的前五項均為不大於105的自然數，等比數列的比值也是自然數。

---

輸出:

對輸入的每個數列，輸出它的前五項。

## 範例
範例1

```
輸入:
2
1 2 3 4
1 2 4 8

---

輸出:
1 2 3 4 5
1 2 4 8 16

```

## 程式碼
cpp

```cpp
#include <iostream>
using namespace std;

int main() {
    int t,a1,a2,a3,a4,d1,d2;
    cin>>t;
    for (int i = 0;i < t ;i++){
        cin>> a1 >> a2 >> a3 >> a4;
        d1 = a2 - a1;
        d2 = a3 - a2;
        if (d1 == d2){
            cout<< a1 <<" "<< a2 << " "<< a3 << " "<< a4 << " "<< a4+d1 << endl;
        }
        else{
            d1 = a2/a1;
            cout<< a1 << " "<< a2 << " "<< a3 << " "<< a4 << " "<< a4*d1 << endl;
        }
    }

    return 0;
}

```

## 標籤
- 迴圈


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a005/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a005)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.23 15點57分
