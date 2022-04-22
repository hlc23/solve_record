def GCD(a,b):
    n = a%b
    if n == 0:
        return b
    else:
        return GCD(b,n)

inp_text = input().split(" ")
print(GCD(int(inp_text[0]),int(inp_text[1])))
