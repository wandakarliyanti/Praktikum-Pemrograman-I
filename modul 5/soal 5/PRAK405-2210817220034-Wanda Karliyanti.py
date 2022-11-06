i=1
while i<=3:
    a,b = input().split()
    a=int(a)
    b=int(b)
    for j in range (1, a+1):
        k=j
        while k>1:
            print("(%d*%d) + "%(k, b), end="");k-=1
        o=1 ;hasil=(j*b)
        while o<j:
            hasil+=(o*b); o+=1
        print("(%d*%d) = %d"%(k, b, hasil))
    p=1; q=1 ;t=0
    while p<=a:
        t+=q*b ;q+=p+1 ;p+=1
    print("%d" %(t))
    print("\n")
    i+=1