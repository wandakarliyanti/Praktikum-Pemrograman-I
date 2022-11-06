i=1
while i<=3:
    n=int(input())
    for j in range(1, n+1):
        if (j%2!=0):
            print(j, end=" ")
    print()
    for j in range(n, 1, -1):
        if(j%2==0):
            print(j, end=" ")
    print("\n")
    i+=1