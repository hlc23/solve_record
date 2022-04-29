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
