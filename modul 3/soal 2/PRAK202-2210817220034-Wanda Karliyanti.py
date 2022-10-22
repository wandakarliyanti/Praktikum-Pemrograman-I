nilai1=float(input("Masukkan Nilai Pertama    : "))
nilai2=float(input("Masukkan Nilai Kedua      : "))
hasil=nilai1+nilai2
print("Hasil dari penjumlahan nilai pertama \"{}\" dan nilai kedua \"{}\" adalah ".format(round(nilai1,2),nilai2),end="")
print("%.2f" %hasil)