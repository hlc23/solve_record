# c067:00591 - Box of Bricks

## 敘述

3歲的小明喜歡玩他的方塊積木，他總是把方塊疊在一起形成高度不一的方塊堆。然後他說：這是一面牆。5歲的姊姊小美聽到了就跟小明說：真正的牆高度應該要一樣才行。小明聽了覺得有道理於是決定要搬動一些方塊使所有方塊堆的高度一樣。如下圖。由於小明是個懶惰的小孩，他想要搬動最小數目的方塊以達成這個目的，你能幫助他嗎？
 
 


## 說明

輸入:

輸入包含好幾組資料，每組資料有2行，第一行有一個數字n，代表有幾堆方塊。第二行有n個數字分別代表這n堆方塊的高度hi。你可以假設1<=n<=50  1<=hi<=100 方塊的總數一定可以整除堆數n，也就是說一定可以使所有的方塊堆同樣高度。 如果輸入的n=0，代表輸入結束。 

---

輸出:

對每一組輸入資料，首先輸出一行這是第幾組測試資料，下一行為"The minimum number of moves is k." k在這裡就是需搬動方塊最小的數目以使所有的方塊堆同一高度。每組測試資料後亦請空一行。請參考Sample Output. 

## 範例
範例1

```
輸入:
6
5 2 4 1 7 5
3
1 1 1
0
---

輸出:
Set #1
The minimum number of moves is 5.

Set #2
The minimum number of moves is 0.
```
## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, hi, a, c,set = 1;
    vector <int> vec;
    while (cin>>n){
        if (n == 0){
            break;
        }
        vec.clear();
        c = 0;
        a = 0;
        for (int t=0; t<n; t++){
            cin>>hi;
            vec.push_back(hi);
            a += hi;
        }
        a /= n;
        for (int t=0; t < vec.size(); t++){
            if (vec[t] > a){
                c += vec[t] - a;
            }
        }
        cout<<"Set #"<<set<<endl;
        cout<<"The minimum number of moves is "<<c<<"."<<endl;
        cout<<endl;
        set ++;
    }
    return 0;
}

```

py

```py
﻿Set = 1
while True:
    n = int(input())
    if n == 0:
        break
    item = []
    inp_text = input()
    inp_text = inp_text.split(" ")
    for t in range(n):
        item.append(int(inp_text[t]))
    avg = sum(item)/n
    move = 0
    for t in range(len(item)):
        if item[t] > avg:
            move += item[t] - avg
    print(f"Set #{Set}")
    print(f"The minimum number of moves is {int(move)}.\n")
    Set += 1
```

## 標籤
- 陣列


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c067/main.cpp)- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c067/main.py)- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c067

## [回首頁](https://henryleecode23.github.io/solve_record/))