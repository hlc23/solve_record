# j123:2. 運貨站

## 敘述

運貨站要管理 $n$ 個五種不同形狀的貨物，下圖標示出貨物的形狀以及對應的英文代碼。現在這 $n$ 個貨物要按照順序堆放在一個容量大小為 $R \times C$ 的倉庫內，第 $i$ 個貨物的形狀為 $t_i$，並且和倉庫的頂部距離為 $y_i$ (見圖ㄧ)。貨物堆放置倉庫內時必須維持和倉庫頂端的高度由右向左推到不能前進為止，並且過程中不行將貨物的方向做旋轉。若有一個貨物不能完整放入倉庫內，則該貨物會被貨運站丟棄。請輸出依序放完這 $n$ 個貨物後，倉庫內有多少剩餘空格，以及被丟棄的貨物有幾個。(圖一: 該貨物類別為 B, 並且離倉庫頂端距離為 2)保證輸入內貨物距離倉庫頂部的高度不會讓貨物底部低於地面，並且不會有任何貨物卡在倉庫門口的情形。


## 說明

輸入:

第一行輸入三個數字 $R(1 \le R \le 30)$, $C(1 \le C \le 50)$, $n(1 \le n \le 200)$，代表倉庫大小為 $R \times C$ 以及有 $n$ 個貨物。接下來有 $n$ 行，第 $i$ 行有一個大寫英文字母 $t_i$ 和一個數字 $y_i$ 代表貨物的種類以及和倉庫頂部的距離，貨物種類只會是 A 到 E 的大寫字母。子題配分- (20%) : 只會出現Ｂ類型- (40%) : 只會出現Ａ,Ｂ,Ｃ類型- (40%) : ５種類型都會出現

---

輸出:

輸出倉庫剩餘的空格數量，以及被丟棄的貨物數量。

## 範例
範例1

```
輸入:
5 4 6
B 0
B 3
B 1
B 3
B 1
B 2
---

輸出:
8 2

```
範例2

```
輸入:
5 6 6
C 1
A 1
E 0
E 0
B 0
A 0
---

輸出:
13 2

```

## 程式碼
cpp

```cpp
#include<iostream>
#include<vector>
#define int long long

using namespace std;

void solve(){
    int R, C, n, l, f, p=0, b=0; // row, col n, l, temp_full, package, block
    char t;
    cin>>R>>C>>n;
    vector<int> full(R, 0);
    for (int i=0; i<n; i++){
        cin>>t>>l;
        switch (t){
            case 'A':
                f = max(full[l], max(full[l+1], max(full[l+2], full[l+3])));
                if (f+1 <= C){
                    full[l] = f+1;
                    full[l+1] = f+1;
                    full[l+2] = f+1;
                    full[l+3] = f+1;
                    p++;
                    b+=4;
                }
                break;
            case 'B':
                f = full[l];
                if (f+3 <= C){
                    full[l] = f+3;
                    p++;
                    b+=3;
                }
                break;
            case 'C':
                f = max(full[l], full[l+1]);
                if (f+2 <= C){
                    full[l] = f+2;
                    full[l+1] = f+2;
                    p++;
                    b+=4;
                }
                break;
            case 'D':
                f = max(full[l]-2, full[l+1]);
                if (f+3 <= C){
                    full[l] = f+3;
                    full[l+1] = f+3;
                    p++;
                    b+=4;
                }
                break;
            case 'E':
                f = max(full[l]-1, max(full[l+1], full[l+2]));
                if (f+2 <= C){
                    full[l] = f+2;
                    full[l+1] = f+2;
                    full[l+2] = f+2;
                    p++;
                    b+=5;
                }
                break;
        }
    }
    cout<<R*C-b<<" "<<n-p;
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}

```

py

```py
inp = list(map(lambda n: int(n), input().split()))
R, C, n = inp
full = [0 for _ in range(R)]
p = 0
b = 0
for i in range(n):
    inp = input().split()
    t = inp[0]
    l = int(inp[1])
    if t == "A":
        f = max(full[l], full[l+1], full[l+2], full[l+3])
        if (f+1 <= C):
            full[l] = f+1
            full[l+1] = f+1
            full[l+2] = f+1
            full[l+3] = f+1
            p+=1
            b+=4
        continue
    if t == "B":
        f = full[l]
        if f+3 <= C:
            full[l] = f+3
            p+=1
            b+=3
        continue
    if t == "C":
        f = max(full[l], full[l+1])
        if f+2 <= C:
            full[l] = f+2
            full[l+1] = f+2
            p+=1
            b+=4
        continue
    if t == "D":
        f = max(full[l]-2, full[l+1])
        if f+3 <= C:
            full[l] = f+3
            full[l+1] = f+3
            p+=1
            b+=4
    if t == "E":
        f = max(full[l]-1, full[l+1], full[l+2])
        if f+2<= C:
            full[l] = f+2
            full[l+1] = f+2
            full[l+2] = f+2
            p+=1
            b+=5
print(R*C-b, n-p)
```

## 標籤
- APCS
- 俄羅斯方塊
- 模擬


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/j123/main.cpp)
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/j123/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=j123)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-27 23:11:46