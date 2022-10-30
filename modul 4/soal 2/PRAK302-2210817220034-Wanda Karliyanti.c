#include<stdio.h>

main(){
    for(int z=1;z<=5;z++){
int nilai;
scanf("%d", &nilai);

if(nilai >= 80){
    printf("A");}

else if(nilai >= 70 && nilai <= 79){
    printf("B");}

else if(nilai >= 60 && nilai <= 69){
    printf("C");}

else if(nilai >= 50 && nilai <= 59){
    printf("D");}

else{printf("E");}

}
}
