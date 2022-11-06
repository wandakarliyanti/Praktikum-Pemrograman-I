i=1
while i<=3:
    n, s=input().split()
    n=int(n)
    for j in range(1,51):
        if(j%n==0):
            print(s, end=" ")
        else:
            print(j, end=" ")
    print("\n")
    i+=1