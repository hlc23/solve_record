# a003:兩光法師占卜術

## 敘述

兩光法師時常替人占卜，由於他算得又快有便宜，因此生意源源不絕，時常大排長龍，他想算 得更快一點，因此找了你這位電腦高手幫他用電腦來加快算命的速度。
　　他的占卜規則很簡單，規則是這樣的，輸入一個日期，然後依照下面的公式：
M=月D=日 S=(M*2+D)%3
得到 S 的值，再依照 S 的值從 0 到 2 分別給與 普通、吉、大吉 等三種不同的運勢
 


## 說明

輸入:

輸入資料共一行，包含兩個整數，分別為月份及日期

---

輸出:

運勢

## 範例
範例1

```
輸入:
1 1

---

輸出:
普通

```
範例2

```
輸入:
1 2

---

輸出:
吉

```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int M,D;
	cin>>M>>D;
	if ((M*2+D)%3 == 0){
		cout<<"普通";
	}
	else if ((M*2+D)%3 == 1){
		cout<<"吉";
	}
	else{
		cout<<"大吉";
	}
}

```

## 標籤
- 曆法


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a003/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a003)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.24 13點50分
