#include<stdio.h>

int main(){
    int b1, b2, i, a, h;
    scanf("%d %d", &b1, &b2);
    int angka1[b1], angka2[b2];
    if(b1==b2){
    for(i=0;i<b1;i++){
        scanf("%d", &a);
        angka1[i]=a;
    }
    for(i=0;i<b2;i++){
        scanf("%d", &a);
        angka2[i]=a;
    }
        for(i=0;i<b1;i++){
        h=angka1[i]*angka2[i];
        printf("%d ", h);
    }
    }
    else{
        printf("Jumlah Tidak Sama");
        }
}
