# d060:還要等多久啊？

## 敘述

文文又想打電話給珊珊，可是這次他碰到了另一個問題。珊珊說他們學校每堂課 50 分鐘，下課的時間都是整點過後 25 分，休息 10 鐘後再上下一節課。文文不想打擾珊珊上課，也不想才剛打通電話她就要上課去了，因此他決定一定要在剛好 25 分的時候打電話給她。給你現在的時間的分，請你幫他算算看還要等多久才能打電話給珊珊？
								

## 說明

輸入:

輸入只有一行，包含現在時間的分 m (0 ≤ m ≤ 59)。

---

輸出:

輸出還要等幾分鐘文文才能打電話。

## 範例
範例1

```
輸入:
20

---

輸出:
5

```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	cout<<(85-n)%60;
	return 0;
}

```

## 標籤
- 算術運算子


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d060/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d060)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.21 11點37分17秒
