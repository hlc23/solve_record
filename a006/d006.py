inp = input().split(" ")

a = float(inp[0])
b = float(inp[1])
c = float(inp[2])

R = b**2-4*a*c

if R > 0:
    x1 = int((-1*b+R**0.5)/2*a)
    x2 = int((-1*b-R**0.5)/2*a)

    if x1 > x2:
        print(f"Two different roots x1={x1} , x2={x2}")
    else:
        print(f"Two different roots x1={x2} , x2={x1}")
elif R == 0:
    x1 = int(((-1*b)/(2*a)))
    print(f"Two same roots x={x1}")
else:
    print("No real root")
