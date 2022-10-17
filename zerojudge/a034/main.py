while True:
    try:
        n = int(input())
        mod = []
        while n>=2:
            mod.append(n%2)
            n = n//2
        mod.append(n%2)
        r = ""
        mod.reverse()
        for n in mod:
            r+=str(n)
        print(r)

    except EOFError:
        break