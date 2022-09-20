# c299:1. 連號或不連號

## 敘述

生物學家發現，與特定功能相關的一群基因在基因序列上的位置通常十分靠近，因此在不同的基因序列中如果都看見相同基因構成的連續片段 (順序不重要)，這些基因構成的集合就被認為是有意義的，稱為基因群 (gene cluster)。例如: 如果在一條基因序列上看到一個片段內容為 $(a, b, c, d)$，同時在另外一條基因序列上看到一個片段內容為 $(d, b, a, c)$，那麼 $\{a, b,c, d\}$ 就構成一組基因群。
找出基因群並不是一件容易的工作，有一個計算生物學家想到一個聰明的方法來簡化這個問題。經過他的簡化後，基因群辨識的主要工作會被轉換成: 輸入一個由相異正整數組成的序列 $S$，然後判斷 $S$ 的內容是否構成連續的一串整數。例如: $S = (2, 5, 3, 4)$ 的內容構成連續的一串整數 $2, 3, 4, 5$；但是 $S = (2, 6, 3, 4)$ 的內容並不構成連續的一串整數 (缺了 $5$)。給定一個數字所構成的序列，請撰寫一個程式來判斷這個序列中的數字是否構成連續的一串整數。


## 說明

輸入:

測試資料是由一行的數字所構成 (數字間以一個以上的空白隔開)，第一個數字 $n$ 表示所給定數字序列的長度，$1 \lt n \le 100$，接下來會有 $n$ 個相異的正整數 $m_i$，$1 \le i \le n$ 且 $1 \le m_i \le 1000$，表示數字序列的內容。

---

輸出:

輸出一行，如果此序列中的數字構成連續的一串整數，請輸出: $a \: b \: \text{yes}$；不行則輸出: $a \: b \: \text{no}$，其中 $a$ 和 $b$ 分別代表序列中所有數字的最小值與最大值。$a$ 和 $b$ 之間以及 $b$ 和 $\text{yes/no}$ 之間，請以剛好一個空白隔開。($\text{yes/no}$ 請用小寫)

## 範例
範例1

```
輸入:
輸入範例 1：
2 6 5

輸入範例 2：
2 5 7
---

輸出:
輸出範例 1：
5 6 yes

輸出範例 2：
5 7 no

```

## 程式碼
cpp

```cpp
#include <iostream>
#include <vector>

int main(){
    // I
    int N;
    std::cin>>N;
    std::vector<int> m(N);
    for (int i=0; i<N; i++){
        std::cin>>m[i];
    }
    // P

    // sort
    int temp;
    for (int i=1; i<N; i++) {
        for (int j=0; j<N; j++){
            if (m[j] > m[i]){
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            } 
        }
    }

    // Check
    bool check = true;
    for (int i=1; i<N; i++) {
        if (m[i-1] != m[i]-1){
            check = false;
            break;
        }
    }

    // O
    if (check) {
        std::cout<<m.front()<<" "<<m.back()<<" "<<"yes";
    }
    else{
        std::cout<<m.front()<<" "<<m.back()<<" "<<"no";
    }

}
```

py

```py
input_text = input().split(" ")

n = int(input_text[0])

del input_text[0]

for i in range(n):
    input_text[i] = int(input_text[i])
    
input_text = sorted(input_text)
linked = True
for i in range(1,n):
    if input_text[i-1] != input_text[i]-1:
        linked = False 
        break 

if linked:
    print(input_text[0], input_text[-1], "yes")
else:
    print(input_text[0], input_text[-1], "no")

```

## 標籤

無

## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c299/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c299/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c299)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-09-20 18:54:13