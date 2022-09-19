# [B. ICPI Balloons](https://codeforces.com/contest/1703/problem/B)

![content](https://imgur.com/ZlhhGw0.png)

## py

```py
testcase = int(input())

for case in range(testcase):
    bloon = 0
    input()
    text = input()
    question = set()
    for label in text:
        if label not in question:
            question.add(label)
            bloon += 2
        else:
            bloon += 1
    print(bloon)
```

最後編輯時間: 2022-09-20 00:43:21

## [回首頁](https://henryleecode23.github.io/solve_record/)