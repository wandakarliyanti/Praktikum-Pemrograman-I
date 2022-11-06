while (True):
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    p=float(input("Masukkan Pilihan : "))
    if p==5:break
    elif p>=6:
        print("Input anda salah, silahkan coba lagi\n\n")
        continue
    n1=float(input("Masukkan nilai pertama : "))
    n2=float(input("Masukkan nilai kedua : "))
    if p==1:
        hasil=(n1+n2)
        print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n"%(n1, n2, hasil)) 
    elif p==2:
         hasil=(n1-n2) 
         print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n"%(n1, n2, hasil))
    elif p==3:
         hasil=(n1*n2) 
         print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n"%(n1,n2, hasil)) 
    elif p==4:
         hasil=(n1/n2) 
         print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n"%(n1, n2 , hasil))
print("Terima kasih, telah menggunakan kalkulator WANDA KALIYANTI")