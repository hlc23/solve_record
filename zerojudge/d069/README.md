# d069:格瑞哥里的煩惱 (t 行版)

## 敘述

現行的曆法是從羅馬人的曆法演變而來的。凱撒大帝編纂了一套曆法，後人稱之為儒略曆 (Julian calendar)。在這曆法中，除了四、六、九、及十一月有30天，二月在平年有28天，在閏年有29天以外，其他的月份都是31天。再者，在這曆法中，每四年有一個閏年。這導因於古代羅馬的星象學家算出一年有365.25天，因此每隔四年就要加一天以保持曆法和季節的一致。於是，他們就在四的倍數的年份多加了一天 (二月29日)。
儒略法：
四的倍數的年份均為閏年，這年會多一天 (二月29日)。
在1582年，教宗格瑞哥里 (Gregory) 的星象學家發現一年並不是365.25天，而是比較接近365.2425天。因此，閏年的規則便修正如下：
格瑞哥里法：
除了不是400的倍數的100的倍數以外，四的倍數的年份均為閏年。
為了要彌補截至當時季節和日曆已產生的誤差，當時的日曆便往前挪移了10天：1582年10月4日的第二天為10月15日。
英格蘭和它的帝國 (包括美國) 一直到1752年才改用格瑞哥里曆，當年的9月2日的第二天為9月14日。(未同步採用新曆乃肇因於亨利八世和教宗的惡劣關係。)
請依現行的曆法判斷所給的西元年份是平年還是閏年。


## 說明

輸入:

輸入的第一行有一個整數 t。接下來的 t 行每行有一個正整數 y，代表西元年份。

---

輸出:

對於所輸入的每個 y，要各別輸出一行。若 y 是閏年，請於該行輸出「a leap year」，否則請輸出「a normal year」。

## 範例
範例1

```
輸入:
4
1992
1993
1900
2000


---

輸出:
a leap year
a normal year
a normal year
a leap year


```

## 程式碼
cpp

```cpp
#include<iostream>
using namespace std;

int main(){
    int n,y;
    cin>>n;
    n = n+1 ;
    for (int t = 1; t < n ;t++){   
        cin>>y;
        if( y%400==0 or ( y%4==0 and y%100!=0 ) )
            cout << "a leap year" << endl;
        else
            cout << "a normal year" << endl;
    }
    return 0;
}

```

## 標籤
- while
- 曆法
- 迴圈


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d069/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d069)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-09-19 20:07:56