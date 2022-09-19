# a224:明明愛明明

## 敘述

一看題名，你就該知道，這次跟迴文脫不了關係！若你不確定什麼是「迴文」，請看 Google 字典的解釋：迴文 huíwén一種修辭方式。通過詞語反復迴環使用，表達二者互相依存或彼此制約的關係，如“人人為我，我為人人”、“饒人不癡漢，癡漢不饒人”。


## 說明

輸入:

一筆測試資料一行，包含許許多多但總數不超過 1000 個的大小寫英文字母和標點符號。不可思議的是，裡面不會有任何空白字元。

---

輸出:

如果重新安排順序後，有辦法讓這一堆英文字母變成迴文的話，輸出「yes !」，否則輸出「no...」。注意，大寫和小寫字母視為相同，即 A 和 a 是一樣的，並且，請忽視所有非英文字母的字元。

## 範例
範例1

```
輸入:
ababa
bbaaa
Level
aaabbbcc
abcdefg
HowAreYouToday
A_man,_a_plan,_a_canal:_Panama.
---

輸出:
yes !
yes !
yes !
no...
no...
no...
yes !
```

## 程式碼
py

```py
t = int(input())
for n in range(t):
    inp_text = input().split(" ")

    a = int(inp_text[0])
    b = int(inp_text[1])
    c = int(inp_text[2])

    if a == 1:
        print(b+c)
    elif a == 2:
        print(b-c)
    elif a == 3:
        print(b*c)
    elif a == 4:
        print(int(b/c))

```

## 標籤
- 字串
- 迴文


## 連結
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a224/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a224)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-09-19 20:08:03