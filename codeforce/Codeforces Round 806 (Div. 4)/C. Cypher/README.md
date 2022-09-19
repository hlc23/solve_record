# [C. Cypher](https://codeforces.com/contest/1703/problem/C)

![content](https://imgur.com/Ji6HEe7.png)

## [py](https://github.com/henryleecode23/solve_record/blob/main/codeforce/Codeforces%20Round%20806%20(Div.%204)/C.%20Cypher/main.py)

```py
testcases = int(input())

for testcase in range(testcases):
    wheels = int(input())
    wheelValues = [int(i) for i in input().split(" ")]
    
    for w in range(wheels):
        actives = input().split(" ")
        for active in actives[1]:
            if active == "U":
                if wheelValues[w] == 0:
                    wheelValues[w] = 9
                    continue
                wheelValues[w] -= 1
            else:
                if wheelValues[w] == 9:
                    wheelValues[w] = 0
                    continue

                wheelValues[w] += 1
    for v in wheelValues:
        print(v, end=" ")
    print()
```

最後編輯時間: 2022-09-20 00:51:26

## [回首頁](https://henryleecode23.github.io/solve_record/)
