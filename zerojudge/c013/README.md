# c013:00488 - Triangle Wave

## 敘述

在這個問題中，根據所給的振幅(Amplitude)及頻率(Frequency)，你的程式要產生這樣的波。
								

## 說明

輸入:

輸入的第一列有一個整數n，代表有幾組測試資料。接下來每組測試資料有2列，各有1個正整數（A、F），A代表振幅（A<=9），F代表頻率。  第一列以及各組測試資料間皆有一空白行。請參考Sample input。

---

輸出:

每組測試資料請輸出F個波，每個波振幅的水平高度為A。波本身是以其"高度"的內容所組成。每個波之間以一空白行分隔開來。  測試資料間也以一空白行分開。  請參考sample output。

## 範例
範例1

```
輸入:
2

3
2
5
3
---

輸出:
1
22
333
22
1

1
22
333
22
1

1
22
333
4444
55555
4444
333
22
1

1
22
333
4444
55555
4444
333
22
1

1
22
333
4444
55555
4444
333
22
1
```

## 程式碼
cpp

```cpp
#include <iostream>
using namespace std;

int main() {
    int test_case, A,F;
    cin>>test_case;
    for (int i = 0; i<=test_case; i++){
        // 此測資有test_case組數據
        cin>>A>>F;
        for (int time = 0; time < F; time++){
            for (int n = 1;n<=A; n++){
                for (int t = 1; t<=n;t++){
                    cout<<n;
                }
                cout<<endl;
            }
            for (int n = A-1; n>=1;n--){
                for (int t = 1; t<=n; t++){
                    cout<<n;
                }
                cout<<endl;
            }
            cout<<endl;
        }
        A = F = 0;
    }
    return 0;
}
```

## 標籤
- 迴圈


## 連結
- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/c013/main.cpp)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=c013)

## [回首頁](https://henryleecode23.github.io/solve_record/)

此頁面最後編輯時間: 2022.4.23 14點41分05秒
