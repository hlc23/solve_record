inp_text = input()
w = {"A":1,"B":10,"C":19,"D":28,"E":37, "F":46,"G":55,
     "H":64,"I":39,"J":73,"K":82, "L":2,"M":11,"N":20,
     "O":30,"P":29,"Q":38, "R":47,"S":58,"T":65,"U":74,
     "V":83,"W":21, "X":3,"Y":12,"Z":30} 
test = w[inp_text[0]]+int(inp_text[1])+int(inp_text[2])*2+int(inp_text[3])*3+int(inp_text[4])*4+int(inp_text[5])*5+int(inp_text[6])*6+int(inp_text[7])*7+int(inp_text[8])*8+int(inp_text[9])*9 
if test%10 == 0:
  print("real") 
else: 
  print("fake")
