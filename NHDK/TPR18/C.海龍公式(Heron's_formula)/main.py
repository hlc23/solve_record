inp_text = input().split(" ")
a = int(inp_text[0])
b = int(inp_text[1])
c = int(inp_text[2])
s = (a+b+c)/2
A = (s*(s-a)*(s-b)*(s-c))**0.5
print(int(A))