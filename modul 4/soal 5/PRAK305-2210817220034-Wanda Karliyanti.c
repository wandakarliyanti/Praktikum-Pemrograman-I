#include<stdio.h>

main(){
    for(int z=1;z<=5;z++){
int hari, jam, menit, detik, d;
scanf("%d", &d);

hari=d%(86400*30)/86400;
jam=(d%86400)/3600;
menit=d%3600/60;
detik=d%60;

if(hari>=1){
    printf("%d hari %.2d:%.2d:%.2d", hari, jam, menit, detik);}

else{printf("%.2d:%.2d:%.2d\n", jam, menit, detik);}

}
}
