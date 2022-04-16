
# d073:分組報告

## 敘述

電腦課要同學分組做期末報告，分組的方式為依座號順序，每 3 個人一組。如：1, 2, 3 為第一組，4, 5, 6 為第二組….以此類推。輸入同學的座號，請判斷他在哪一組。


## 說明

輸入:

輸入只有一行，含有一個正整數 n，代表同學的座號。

---

輸出:

輸出該同學的組別。

## 範例
範例1

```
輸入:
7

---

輸出:
3

```範例2

```
輸入:
12

---

輸出:
4

```
## 程式碼
cpp

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	long long int n;
	cin>>n;
	cout<<(n+2)/3;
	return 0;
}


```

## 標籤
- 算術運算子


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d073/main.cpp)- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d073

## [回首頁](https://henryleecode23.github.io/solve_record/
))