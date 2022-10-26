#include<stdio.h>

int main(){
char nama[40], nim[40],kelas[40], ttl[40], alamat[40], hobby[40], no[40];

printf("Nama                     : ");
gets(nama);
printf("NIM                      : ");
gets(nim);
printf("Kelas Paralel            : ");
gets(kelas);
printf("Tempat/Tanggal Lahir     : ");
gets(ttl);
printf("Alamat                   : ");
gets(alamat);
printf("Hobby                    : ");
gets(hobby);
printf("No. Hp                   : ");
gets(no);

printf("\nNama                     : %s\n", nama);
printf("NIM                      : %s\n", nim);
printf("Kelas Paralel            : %s\n", kelas);
printf("Tempat/Tanggal Lahir     : %s\n", ttl);
printf("Alamat                   : %s\n", alamat);
printf("Hobby                    : %s\n", hobby);
printf("No. Hp                   : %s", no);

}
