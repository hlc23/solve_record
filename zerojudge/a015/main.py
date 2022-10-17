while True:
    try:
        inp = input().split(" ")
        row, col = int(inp[0]), int(inp[1])

        table = []
        for i in range(row):
            temp = input().split(" ")
            for n in range(col):
                temp[n] = temp[n]
            table.append(temp)

        for i in range(col):
            for j in range(row):
                print(table[j][i], end=" ")
            print("")

    except EOFError:
        break