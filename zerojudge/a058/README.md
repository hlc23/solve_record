
# a058:MOD3

## 敘述

相信判斷一個數除以三的餘數是多少，對你來說應該沒有問題。那，如果一次請你判斷很多個數呢嘿嘿？給你n個數字，請你輸出3k、3k+1、3k+2的數各有幾個
								
## 說明

輸入:

第一行有一個正整數n，代表接下來有幾個數字，接著有n個介於1到50000之間的數字，請你做判斷

---

輸出:

輸出三個數字(以空白隔開)，分別為n個數字中，三的倍數、三的倍數+1、三的倍數+2的數量

## 範例

範例1

```text
輸入:
5
1
2
3
4
5
---

輸出:
1 2 2
```

## 程式碼
    
c++

```cpp
#include<iostream>
using namespace std;

int main(){
    int n,t,m,k=0,kp1=0,kp2=0;
    cin>>n;
    for (int ti = 0; ti < n; ti++){

        cin>>t;
        m = t%3;
        switch (m){
            case 0:
                k++;
                break;
            case 1:
                kp1++;
                break;
            case 2:
                kp2++;
                break;
        }
    }
    cout<< k << " " << kp1 << " " << kp2;
    return 0;
}

```

## 標籤
- if
- 數學


## 連結

- GitHub: [C++程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a058/main.cpp)

- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a058)

## [回首頁](https://henryleecode23.github.io/solve_record/)
