while True:
    try:
        year = int(input())
        print("閏年" if (((year%4)==0) and ((year%100)!=0) or ((year%400) ==0)) else "平年")
        # if (((year%4)==0) and ((year%100)!=0) or ((year%400) ==0)):
        #     print("閏年")
        # else:
        #     print("平年")
    except EOFError:
        break
