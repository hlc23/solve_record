# d068:該減肥了！

## 敘述

珊珊開了一家體重管理中心。每當有新顧客上門，她就為她量體重。如果體重大於 50 公斤，她就免費送她一堂可以減一公斤的體驗課程。給你新顧客的體重，請輸出她離開中心時的體重。


## 說明

輸入:

輸入只有一行，其中含有一個正整數 w，代表新顧客進門的體重。

---

輸出:

請輸出該顧客離開時的體重。

## 範例
範例1

```
輸入:
60


---

輸出:
59


```
範例2

```
輸入:
45

---

輸出:
45

```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    long long int w;
    cin>>w;
    cout<<w-(w>50);
    return 0;
}


```

## 標籤
- 比較運算子
- 算術運算子


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/d068/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=d068)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.27 02點40分
