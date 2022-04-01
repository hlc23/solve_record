def h2m(h:int):
    return h*60
def main():

    while True:
        i = input()
        i = i.split(" ")
        h1 = int(i[0])
        m1 = int(i[1])
        h2 = int(i[2])
        m2 = int(i[3])
        M1 = h2m(h1)+m1
        M2 = h2m(h2)+m2
        if M1 == 0 and M2 == 0:
            continue
        if M1 > M2:
            print(M2+1440-M1)
        else:
            print(M2-M1)

main()