# a034:二進位制轉換

## 敘述

還記得計算機概論嗎？還記得二進位嗎？
現在我們來計算一下將一個10進位的數字換成二進位數字
 


## 說明

輸入:

輸入若干行直到 EOF 為止。每一行包含一個十進位的整數
 

---

輸出:

針對每一行的整數輸出其二進位制的結果

## 範例
範例1

```
輸入:
3
6
---

輸出:
11
110
```

## 程式碼
cpp

```cpp
#include <iostream>
#include <vector>

int main(){
    int N;
    int t;
    std::string s;
    std::cin>>N;
    std::vector<int> vec(0);
    
    while (N/2){
        vec.push_back(N%2);
        N /= 2;
    }
    vec.push_back(N%2);

    for (int i=vec.size(); i>0; i--){
        if (vec[i-1]>9){
            std::cout<<(char)(vec[i-1]+55);
        }
        else{
            std::cout<<vec[i-1];
        }
    }
}
```

py

```py
while True:
    try:
        n = int(input())
        mod = []
        while n>=2:
            mod.append(n%2)
            n = n//2
        mod.append(n%2)
        r = ""
        mod.reverse()
        for n in mod:
            r+=str(n)
        print(r)

    except EOFError:
        break
```

## 標籤
- 迴圈


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a034/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a034/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a034)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-17 19:46:03