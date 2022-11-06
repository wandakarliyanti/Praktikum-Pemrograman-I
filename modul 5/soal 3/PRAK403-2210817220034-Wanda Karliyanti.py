for i in range(4):
    a1, a2= input().split()
    j=a1=int(a1)
    k=a2=int(a2)
    if(a1>a2):
        while j>=a2 and k<=a1:
            print(j, k, end=" ")
            if(j==a2):break
            else:
                print("-", end=" ")
            j-=1;k+=1
        print("\n")
    else:
        while j<=a2 and k>=a1:
            print(j, k, end=" ")
            if(j==a2):break
            else:
                print("-", end=" ")
            j+=1;k-=1
        print("\n")