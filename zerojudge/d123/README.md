# d123:11063 - B2-Sequence

## 敘述

所謂「B2數列」係指一正整數數列 1<= b1 < b2 < b3 ...，其中所有的 bi + bj （i <= j）皆不相等。您的任務是判別某一數列是否為「B2數列」。


## 說明

輸入:

每筆測試資料有兩行，第一行代表該數列有 N 個數值（2 ≤ N ≤ 100），第二行則為該數列的N個數值。每個數值 bi 皆為整數，且 bi ≤ 10000。

---

輸出:

每筆測試資料以一行輸出，且每筆輸出資料後均需輸出一空白行。格式請參考輸出範例。

## 範例
範例1

```
輸入:
4
1 2 4 8
4
3 7 10 14
5
13 14 15 16 17
---

輸出:
Case #1: It is a B2-Sequence.

Case #2: It is not a B2-Sequence.

Case #3: It is not a B2-Sequence.


```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int Case=0,num;
    while(cin>>num){
        int count=0;
        Case++;
        vector<int> vec(num,0);
        for(int i=0;i<num;i++){
            cin>>vec[i];    
        }
        for(int n=0;n<num;n++){
            for(int m=n;m<num;m++){
                int a=vec[n]+vec[m];
                vec.push_back(a);
            }
        }
        for(int i=num;i<vec.size();i++){
            for(int n=i+1;n<vec.size();n++){
                if(vec[i]==vec[n]){
                    cout<<"Case #"<<Case<<": It is not a B2-Sequence."<<endl<<endl;
                    count++;
                    break;
                }
            }
            if(count==1)break;
        }
        if(count==0)
        cout<<"Case #"<<Case<<": It is a B2-Sequence."<<endl<<endl;
        }
    return 0;
}

```

## 標籤

無

## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d123/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d123)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.5.5 14點42分
