#include<stdio.h>

main(){
    for(int z=1;z<=5;z++){
int a;
scanf("%d", &a);

if(a==0){
    printf("Nol");}

else if(a>=1 && a<10){
    printf("Satuan");}

else if(a>=11 && a<20){
    printf("Belasan");}

else if(a==10 || a>=20 && a<100){
    printf("Puluhan");}

else{printf("Anda Menginput Melebihi Limit Bilangan");}

}
}
