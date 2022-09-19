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