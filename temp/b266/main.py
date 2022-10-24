def debug(table:list):
    R, C = len(table), len(table[0])
    print("Debug:")
    print(f"R:{R}, C:{C}")
    for r in range(R):
        for c in range(C-1):
            # print(r,c)
            print(table[r][c], end=" ")
        print(table[r][C-1])
    print("-------------------------------")

# I
inp = input().split(" ")
R, C, M = int(inp[0]), int(inp[1]), int(inp[2])
table = []
for r in range(R):
    inp = input().split(" ")
    col = [int(n) for n in inp]
    table.append(col)
action = input().split(" ")
# debug(table)
action.reverse()
# P
for a in action:
    # print(a)
    R, C = len(table), len(table[0])
    # print(R, C)
    if a == "0": #旋轉
        new_table = []
        for c in range(C):
            temp = []
            for r in range(R):
                temp.append(table[r][C-c-1])
            new_table.append(temp)
        # new_table.reverse()
        	
        
        table = new_table
    else: # 翻轉
        new_table = []
        for r in range(R):
            new_table.append(table[r])
        new_table.reverse()
    table = new_table
    # debug(table)
# print(table)
R, C = len(table), len(table[0])
print(R, C)
for r in range(R):
    for c in range(C-1):
        # print(r,c)
        print(table[r][c], end=" ")
    print(table[r][C-1])
# print(table)
