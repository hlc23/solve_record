# c463:apcs 樹狀圖分析 (Tree Analyses)

## 敘述





## 說明

輸入:

第一行有一個正整數n代表樹狀圖的節點個數，節點的編號為1到n。接下來有n行，第i行的第一個數字k代表節點i有k個子節點，第i行接下來的k個數字就是這些子節點的編號。每一行的相鄰數字間以空白隔開。

---

輸出:

輸出兩行各含一個整數，第一行是根節點的編號，第二行是H(T)。

## 範例
範例1

```
輸入:
範例一：
7 
0 
2 6 7 
2 1 4 
0 
2 3 2 
0 
0 

範例二：
9 
1 6 
3 5 3 8 
0 
2 1 7 
1 9 
0 
1 2 
0 
0 
---

輸出:
範例一：
5 
4 

範例二：
4 
11 
```

## 程式碼
cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
//input:
    int n;
    // 建立二維向量
    vector <vector<int> > vec(n);
    // 讀取n行數據
    cin>>n;
    for (int i=1; i<=n; i++){
        // 讀取第i行數據
        int k=0;
        cin>>k;
        // k個子節點
        vector <int> child_point(k,0);
        for (int t=1; t<=k; t++){
            // 讀取k個子節點
            int p;
            cin>>p;
            child_point[t]=p;
            // 將各個子節點存入chile_point
        }
        // 將編號i的節點的子節點存入vec
        // 表示節點i的子節點
        vec.push_back(child_point);
    }
    for (int i=1; i<=vec.size(); i++){
    	cout<<i<<":";
    	for (int t=0;t<vec[i].size()-1;t++){
    		cout<<vec[i][t]<<" ";
		}
		cout<<endl;
	}


    
    return 0;
}
```

## 標籤
- 2017.10.18 -3
- apcs


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c463/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c463)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-09-19 20:07:53