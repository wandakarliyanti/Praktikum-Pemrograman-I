for z in range(3):
    a, b=input().split()
    a=int(a)
    b=int(b)
    if(a>b):
        print("{} {}\n". format(b,a))
    else:
        print("{} {}\n". format(a,b))