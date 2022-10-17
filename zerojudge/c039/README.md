# c039:00100 - The 3n + 1 problem

## 敘述

考慮以下的演算法：  1.         輸入 n     2.         印出 n      3.         如果 n = 1 結束      4.         如果 n 是奇數 那麼 n=3*n+1      5.         否則 n=n/2      6.         GOTO 2     例如輸入 22, 得到的數列： 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1     據推測此演算法對任何整數而言會終止 (當列印出 1 的時候)。雖然此演算法很簡單，但以上的推測是否真實卻無法知道。然而對所有的n ( 0 < n < 1,000,000 )來說，以上的推測已經被驗證是正確的。     給一個輸入 n ,透過以上的演算法我們可以得到一個數列（1作為結尾）。此數列的長度稱為n的cycle-length。上面提到的例子, 22  的 cycle length為 16.     問題來了：對任2個整數i，j我們想要知道介於i，j（包含i，j）之間的數所產生的數列中最大的  cycle length 是多少。
								

## 說明

輸入:

輸入可能包含了好幾列測試資料，每一列有一對整數資料 i，j 。   0< i，j < 1,000,000 

---

輸出:

對每一對輸入 i , j 你應該要輸出  i, j 和介於 i, j 之間的數所產生的數列中最大的 cycle length。

## 範例
範例1

```
輸入:
1 10
10 1
100 200
201 210
900 1000
---

輸出:
1 10 20
10 1 20
100 200 125
201 210 89
900 1000 174
```

## 程式碼
cpp

```cpp
#include <iostream>

int cl(int n){
	if (n==1) return 1;
	else if (n%2==1) return cl(3*n+1)+1;
	else return cl(n/2)+1;
}

int main(){
    int n1, n2;
    while (std::cin>>n1>>n2){
        int t=0, temp=0;
        for (int x=std::min(n1, n2); x<=std::max(n1, n2); x++){
        	temp = cl(x);
        	if (temp > t) t = temp;
    	}
        std::cout<<n1<<" "<<n2<<" "<<t<<"\n";
	}
	return 0;
}

```

## 標籤

無

## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c039/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c039)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-10-17 19:46:03