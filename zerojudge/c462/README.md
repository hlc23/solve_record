# c462:apcs 交錯字串 (Alternating Strings)

## 敘述




## 說明

輸入:

輸入的第一行是k，第二行是輸入字串，字串長度至少為1，只由大小寫英文字母組成(A~Z, a~z)並且沒有空白。

---

輸出:

輸出輸入字串中滿足 k-交錯字串 的要求的最長一段連續子字串的長度，以換行結尾。

## 範例
範例1

```
輸入:
範例一：
1 
aBBdaaa

範例二：
3 
DDaasAAbbCC

範例三：
2 
aafAXbbCDCCC

範例四：
3 
DDaaAAbbCC
---

輸出:
範例一：
2

範例二：
3

範例三：
8

範例四：
0
```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    string text;
    // input
    cin>>k;
    cin>>text;
    long long int size = text.size();
    
    for (int i=0 ; i < size ;i++){
        int n = (int)text[i];
        if (n>=97 and n<=122){
            //小寫英文字母範圍為97(a)~122(z)
            text[i] = '0';
        }
        if (n>=65 and n<=90){
            //大寫字母範圍為65(A)~90(Z)
            text[i] = '1';
        }
    }

    for (int i=0;i<=size-k+1;i++){
        int temp = 0;
        for (int j = 0;j<k; j++){
            temp += (int)text[i+j]-48;
            }
        cout<<temp<<" "<<endl;

    }

    return 0;
}
```

## 標籤
- 2017.10.18 -2
- apcs


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c462/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c462)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-09-19 20:07:51