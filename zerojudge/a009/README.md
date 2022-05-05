# a009:解碼器

## 敘述

　　在密碼學裡面有一種很簡單的加密方式，就是把明碼的每個字元加上某一個整數K而得到密碼的字元（明碼及密碼字元一定都在ASCII碼中可列印的範圍內）。例如若K=2，那麼apple經過加密後就變成crrng了。解密則是反過來做。這個問題是給你一個密碼字串，請你依照上述的解密方式輸出明碼。
至於在本任務中K到底是多少，請自行參照Sample Input及Sample Output推出來吧！相當簡單的。


## 說明

輸入:

輸入共一行，每行含有1個字串，就是需要解密的明碼。

---

輸出:

對每一測試資料，請輸出解密後的密碼。

## 範例
範例1

```
輸入:
1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5


---

輸出:
*CDC is the trademark of the Control Data Corporation.

```
範例2

```
輸入:
1PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu5

---

輸出:
*IBM is a trademark of the International Business Machine Corporation.


```

## 程式碼
cpp

```cpp
#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++){
        char a = (char)s[i]-7;
        cout<<a;
    }
    return 0;
}
```

py

```py
inp_text = input()
output = ""
for w in inp_text:
    output += chr(ord(w)-7)
print(output)
```

## 標籤
- 字元處理


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a009/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a009/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a009)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.5.5 14點42分
