# d051:糟糕，我發燒了！

## 敘述

珊珊在美國讀書，有一天覺得昏沉沉的全身不舒服，心想自己是不是發燒了。到藥局買了一支體溫計量了一下體溫，發現她的體溫是華氏 104 度。習慣了台灣的攝氏，她一時還不知道自己的體溫到底有多燒。你能不能幫她寫個程式，把華氏的溫度轉成攝氏的溫度。
								

## 說明

輸入:

輸入僅有一行，含有一個整數 f (-460 ≤ f ≤ 2147483647)，代表華氏溫度。

---

輸出:

輸出計算所得的攝氐溫度，精確到小數點以下三位。

## 範例
範例1

```
輸入:
104

---

輸出:
40.000

```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	long long int f;
	cin>>f;
	cout<<fixed<<setprecision(3)<<(f-32)*(5.0/9);
	return 0;
}

```

## 標籤
- 浮點數


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d051/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d051)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.21 11點44分28秒
