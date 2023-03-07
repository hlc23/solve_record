a1 = int(input())
a2 = int(input())
b1 = int(input())
b2 = int(input())


x = -(b1-b2)/(a1-a2)*100
y = (a1*b2-a2*b1)/(a1-a2)*100
print(f"{round(x)/100:0.2f}")
print(f"{round(y)/100:0.2f}")

