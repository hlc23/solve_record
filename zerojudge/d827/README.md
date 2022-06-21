# d827:買鉛筆

## 敘述

鉛筆一支 5 元，一打 50 元。小明需要幫班上每位同學買一枝鉛筆，請問要多少錢？由於小明很注重環保，他絕不會為了省錢而多買任何不需要的東西。也就是說，小明買的鉛筆數量一定等於班上的人數。


## 說明

輸入:

輸入只有一行，含有小明班上的人數 n，1 ≤ n ≤ 200。

---

輸出:

請輸出一個數字，代表這次採購的金額。

## 範例
範例1

```
輸入:
42

---

輸出:
180

```
範例2

```
輸入:
11

---

輸出:
55

```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	long long int n;
	cin>>n;
	cout<<(n/12)*50+(n%12)*5;
	return 0;
}


```

## 標籤
- 算術運算子


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d827/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d827)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022-06-21 11:54:05.491304+08:00
