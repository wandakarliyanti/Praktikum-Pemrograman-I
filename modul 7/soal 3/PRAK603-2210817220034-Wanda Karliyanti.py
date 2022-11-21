b1, b2 = map(int, input().split())
if (b1!=b2):
    print("\nJumlah tidak sama")
else:
    angka1=list(map(int, input().split()))
    angka2=list(map(int, input().split()))
    print("")
    for i in range (b1):
        print(angka1[i]*angka2[i], end=' ')