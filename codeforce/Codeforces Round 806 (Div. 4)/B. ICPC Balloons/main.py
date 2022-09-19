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
