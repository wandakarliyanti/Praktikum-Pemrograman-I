#include <stdio.h>

int main (){

int p;
float a,b,hasil;
while (p!=5){

printf("Pilih program\n");
printf("1.Penjumlahan\n");
printf("2.Pengurangan\n");
printf("3.Perkalian\n");
printf("4.Pembagian\n");
printf("5.Exit\n");
printf("Masukkan Pilihan : ");
scanf("%d",&p);

    if (p==5){
        printf("Terima kasih, telah menggunakan kalkulator WANDA KARLIYANTI");}
    else if (p<0 || p>5){
        printf("Input anda salah, silahkan coba lagi\n\n");}
    else{
        printf("Masukkan Nilai pertama : ");scanf("%f",&a);

printf("Masukkan Nilai kedua : ");
scanf("%f",&b);
    if (p==1){hasil=a+b;
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n",a,b,hasil);}
    else if (p==2){hasil= a - b;
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n",a,b,hasil);}
    else if (p==3){hasil= a * b;
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n",a,b,hasil);}
    else{hasil=a/b;
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %2.f\n\n",a,b,hasil);}

}
}
}
