# b964:第 1 題 成績指標

## 敘述

一次考試中，於所有及格學生中獲取最低分數者最為幸運，反之，於所有不及格同學中，獲取最高分數者，可以說是最為不幸，而此二種分數，可以視為成績指標。
請你設計一支程式，讀入全班成績(人數不固定)，請對所有分數進行排序，並分別找出不及格中最高分數，以及及格中最低分數。
當找不到最低及格分數，表示對於本次考試而言，這是一個不幸之班級，此時請你印出「worst case」；反之，當找不到最高不及格分數時，請你印出「best case」。
( 註：假設及格分數為 60 )。


## 說明

輸入:

第一行輸入學生人數，第二行為各學生分數(0~100 間)，分數與分數之間以一個空白間格。每一筆測資的學生人數為 1~20 的整數。

---

輸出:

每筆測資輸出三行。
第一行由小而大印出所有成績，兩數字之間以一個空白間格，最後一個數字後無空白；第二行印出最高不及格分數，如果全數及格時，於此行印出 best case ；第三行印出最低及格分數，如果全數不及格時，於此行印出 worst case 。

## 範例
範例1

```
輸入:
10
0 11 22 33 55 66 77 99 88 44

---

輸出:
0 11 22 33 44 55 66 77 88 99
55
66

```
範例2

```
輸入:
1
13

---

輸出:
13
13
worst case
```
範例3

```
輸入:
2
73 65
---

輸出:
65 73
best case
65
```

## 程式碼
cpp

```cpp
#include<iostream>
#include<vector>
#include<algorithm>

void solve(){
    int l, temp;
    std::cin>>l;
    std::vector<int> vec(l);
    for (int i=0; i<l; i++){
        std::cin>>temp;
        vec[i] = temp;
    }
    std::sort(vec.begin(), vec.end());
    std::vector<int> passed(0);
    std::vector<int> failed(0);
    for (int i=0; i<l-1; i++){
        std::cout<<vec[i]<<" ";
    }
    std::cout<<vec[l-1]<<"\n";
    for (int i=0; i<l; i++){
        if (vec[i] < 60) failed.push_back(vec[i]);
        else passed.push_back(vec[i]);
    }
    if (failed.size() != 0) std::cout<<failed[failed.size()-1];
    else std::cout<<"best case";
    std::cout<<"\n";
    if (passed.size() != 0) std::cout<<passed[0];
    else std::cout<<"worst case";
}

int main(){
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
    solve();
}

```

py

```py
scores = int(input())
inp = input().split()
data = [int(n) for n in inp]
data.sort()
for i in data[:-1]:
    print(i, end=" ")
print(data[-1])
pass_data = [n for n in data if n>=60]
fail_data = [n for n in data if n<60]
pass_data.sort()
fail_data.sort()
if len(fail_data) != 0:
    print(fail_data[-1])
else:
	print("best case")
if len(pass_data) != 0:
    print(pass_data[0])
else:
	print("worst case")
```

## 標籤
- APCS


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/b964/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/b964/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=b964)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-25 00:08:17