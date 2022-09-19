# a020:身分證檢驗

## 敘述

我國的身分證字號有底下這樣的規則，因此對於任意輸入的身分證字號可以有一些基本的判斷原則，請您來判斷一個身分證字號是否是正常的號碼(不代表確有此號、此人)。
(1) 英文代號以下表轉換成數字       A=10 台北市     J=18 新竹縣     S=26 高雄縣       B=11 台中市     K=19 苗栗縣     T=27 屏東縣       C=12 基隆市     L=20 台中縣     U=28 花蓮縣       D=13 台南市     M=21 南投縣     V=29 台東縣       E=14 高雄市     N=22 彰化縣     W=32 金門縣       F=15 台北縣     O=35 新竹市     X=30 澎湖縣       G=16 宜蘭縣     P=23 雲林縣     Y=31 陽明山       H=17 桃園縣     Q=24 嘉義縣     Z=33 連江縣       I=34 嘉義市     R=25 台南縣   (2) 英文轉成的數字, 個位數乘９再加上十位數的數字   (3) 各數字從右到左依次乘１、２、３、４．．．．８   (4) 求出(2),(3) 及最後一碼的和
  (5) (4)除10 若整除，則為 real，否則為 fake
 例： T112663836
2 + 7*9 + 1*8 + 1*7 + 2*6 + 6*5 + 6*4 + 3*3 + 8*2 + 3*1 + 6 = 180
除以 10 整除，因此為 real 


## 說明

輸入:

輸入共一行。每一行包含一組身分證號碼

---

輸出:

每讀入一行身分證字號，輸出 real or fake

## 範例
範例1

```
輸入:
T112663836

---

輸出:
real

```
範例2

```
輸入:
S154287863

---

輸出:
fake

```

## 程式碼
py

```py
inp_text = input()
w = {"A":1,"B":10,"C":19,"D":28,"E":37, "F":46,"G":55,
     "H":64,"I":39,"J":73,"K":82, "L":2,"M":11,"N":20,
     "O":30,"P":29,"Q":38, "R":47,"S":58,"T":65,"U":74,
     "V":83,"W":21, "X":3,"Y":12,"Z":30} 
test = w[inp_text[0]]+int(inp_text[1])+int(inp_text[2])*2+int(inp_text[3])*3+int(inp_text[4])*4+int(inp_text[5])*5+int(inp_text[6])*6+int(inp_text[7])*7+int(inp_text[8])*8+int(inp_text[9])*9 
if test%10 == 0:
  print("real") 
else: 
  print("fake")

```

## 標籤
- 流程控制


## 連結
- GitHub: [py程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/a020/main.py)


- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=a020)

## [回首頁](https://henryleecode23.github.io/solve_record/)


最後編輯時間: 2022-09-19 20:07:58