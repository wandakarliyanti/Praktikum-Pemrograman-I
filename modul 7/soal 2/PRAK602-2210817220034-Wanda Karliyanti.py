b=int(input())
a=[]
angka=list(map(int,input().split()))
print("")
for i in range (b):
    print(angka[i]*(i+1), end= ' ')