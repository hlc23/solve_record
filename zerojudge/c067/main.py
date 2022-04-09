Set = 1
while True:
    n = int(input())
    if n == 0:
        break
    item = []
    inp_text = input()
    inp_text = inp_text.split(" ")
    for t in range(n):
        item.append(int(inp_text[t]))
    avg = sum(item)/n
    move = 0
    for t in range(len(item)):
        if item[t] > avg:
            move += item[t] - avg
    print(f"Set #{Set}")
    print(f"The minimum number of moves is {int(move)}.\n")
    Set += 1