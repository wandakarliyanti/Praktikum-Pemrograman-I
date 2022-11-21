b, k=map(int, input().split())
angka=[]
x=0
a=list(map(int, input().split()))
for i in range (b):
    angka.append(a[x:x+k])
    x=x+k
print("")
for b in angka:
    for a in b:
        print(a, end=' ')
    print("")