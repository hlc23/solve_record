# a004:文文的求婚

## 敘述

    文文為即將出國的珊珊送行，由於珊珊不喜歡別人給文文的那個綽號，意思就是嘲笑文文不夠 聰明，但珊珊沒把握那個綽號是不是事實，所以珊珊決定考驗文文，於是告訴文文說，如果你能在 我回國之前回答我生日那年是不是閏年，則等她回國後就答應他的求婚。文文抓抓腦袋想不出來， 於是決定讓最擅長做運算的電腦來幫忙。


## 說明

輸入:

輸入有若干行直到 EOF 結束，每行包含一個整數代表年份

---

輸出:

閏年 或 平年

## 範例
範例1

```
輸入:
1977
1980
---

輸出:
平年
閏年
```

## 程式碼
cpp

```cpp
#include<iostream>
using namespace std;
int main(){
    int year;
    while (cin>>year){
    if ( year%400==0 or ( year%4==0 and year%100!=0 ) ) cout<<"閏年"<<endl;
    else cout<<"平年"<<endl;
    }
}
```

py

```py
while True:
    try:
        year = int(input())
        print("閏年" if (((year%4)==0) and ((year%100)!=0) or ((year%400) ==0)) else "平年")
        # if (((year%4)==0) and ((year%100)!=0) or ((year%400) ==0)):
        #     print("閏年")
        # else:
        #     print("平年")
    except EOFError:
        break

```

## 標籤
- 曆法


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a004/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a004/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a004)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-16 01:49:08