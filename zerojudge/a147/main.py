while True:
    inp_text = int(input())
    if inp_text == 0:
        break
    for n in range(1, inp_text):
        if n%7 != 0:
            print(n,end=" ")
    print("")