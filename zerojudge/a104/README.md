# a104:排序

## 敘述

幫我排個數字謝謝QQ
								

## 說明

輸入:

有多筆測資以EOF為結束第一行有一個正整數n(1<=n<=1000)，代表有幾個數字要請你幫忙排第二行有n個可以用int儲存的正整數

---

輸出:

輸出n個已由小到大排序好的正整數

## 範例
範例1

```
輸入:
6
7 9 0 4 1 8
8
1 9 9 0 0 9 2 8

---

輸出:
0 1 4 7 8 9
0 0 1 2 8 9 9 9

```

## 程式碼
cpp

```cpp
#include <iostream>

using namespace std;

int main(){
	int n;
	while (cin>>n){
		
		int array[1001];
		for (int i=0; i<n; i++){
			cin>>array[i];
		}
	
		int temp;
		for (int i=1; i<n; i++) {
	        for (int j=0; j<n; j++){
	        	if (array[j] > array[i]){
					temp = array[i];
	                array[i] = array[j];
	                array[j] = temp;
				} 
			}
		}
		
		for (int i=0; i<n; i++){
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	return 0;	
}

```

## 標籤
- 排序


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a104/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a104)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-09-19 20:07:55