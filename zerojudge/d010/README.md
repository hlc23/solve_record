# d010:盈數、虧數和完全數

## 敘述

對一個正整數 N 而言，將它除了本身以外所有的因數加起來的總和為 S，如果 S>N，則 N 為盈數，如果 S<N，則 N 為虧數，而如果 S=N，則 N 為完全數(Perfect Number)。例如 10 的因數有 1、2、5、10，1+2+5=8<10，因此10 為虧數，而 12 的因數有 1、2、3、4、6、12，1+2+3+4+6=16>12，因此 12 為盈數。至於 6 的因數有 1、2、3、6，1+2+3=6，所以 6 是完全數(它也是第一個完全數)。
現在請你寫一個程式，輸入一個正整數 N，然後印出它是盈數、虧數還是完全數。


## 說明

輸入:



---

輸出:



## 範例
範例1

```
輸入:
30

---

輸出:
盈數

```
範例2

```
輸入:
26

---

輸出:
虧數

```
範例3

```
輸入:
28

---

輸出:
完全數

```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

int run(int N) {
    int sum = 0;
    vector <int> vec;
    for (int i = 1; i < N; i++){
        if (N == i){
            break;
        }
        if (N%i == 0){
            vec.push_back(i);
        }
    }

    for (int t = 0; t < vec.size(); t++){
        
        sum += vec[t];
    }
    if (N == sum) {
        cout<<"完全數"<<endl;
    }
    else if (N > sum){
        cout<<"虧數"<<endl;
    }
    else if (N < sum){
        cout<<"盈數"<<endl;
    }

    return 0;
}

int main(){
    int N;
    while (cin>>N) run(N);
    return 0;
}

```

py


在讀取main.py時編碼錯誤

## 標籤
- 數學


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d010/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d010/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d010)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.24 10點31分
