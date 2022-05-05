inp_text = input()
output = ""
for w in inp_text:
    output += chr(ord(w)-7)
print(output)