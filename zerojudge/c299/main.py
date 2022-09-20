input_text = input().split(" ")

n = int(input_text[0])

del input_text[0]

for i in range(n):
    input_text[i] = int(input_text[i])
    
input_text = sorted(input_text)
linked = True
for i in range(1,n):
    if input_text[i-1] != input_text[i]-1:
        linked = False 
        break 

if linked:
    print(input_text[0], input_text[-1], "yes")
else:
    print(input_text[0], input_text[-1], "no")
