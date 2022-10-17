# a015:矩陣的翻轉

## 敘述

已知一(m x n)矩陣A，我們常常需要用到另一個將A中之行與列調換的矩陣。這個動作叫做矩陣的翻轉。舉例來說，若A =[312]854則AT =[38]1524 現在 請您針對所讀取到的矩陣進行翻轉。


## 說明

輸入:

第一行會有兩個數字，分別為 列(row)<100 和 行(column)<100，緊接著就是這個矩陣的內容

---

輸出:

直接輸出翻轉後的矩陣

## 範例
範例1

```
輸入:
2 3
3 1 2
8 5 4

---

輸出:
3 8
1 5
2 4

```

## 程式碼
cpp

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row, col;
    while (cin>>row>>col){
        vector<vector<int> > table;
        vector<int> temp_vec;
        int temp;
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                cin>>temp;
                temp_vec.push_back(temp);
            }
            table.push_back(temp_vec);
        }

        for (int i=0; i<col; i++){
            for (int j=0; j<row; j++){
                cout<<table[j][i]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}
```

py

```py
while True:
    try:
        inp = input().split(" ")
        row, col = int(inp[0]), int(inp[1])

        table = []
        for i in range(row):
            temp = input().split(" ")
            for n in range(col):
                temp[n] = temp[n]
            table.append(temp)

        for i in range(col):
            for j in range(row):
                print(table[j][i], end=" ")
            print("")

    except EOFError:
        break
```

## 標籤
- 陣列


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a015/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a015/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a015)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-17 19:46:03