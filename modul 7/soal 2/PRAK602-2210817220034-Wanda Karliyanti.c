#include<stdio.h>

int main(){
    int b,i,a;
    scanf("%d", &b);
    int angka[b];
    for(i=0;i<b;i++){
        scanf("%d", &a);
        angka[i]=a;
    }
    printf("\n");
    for(i=0;i<b;i++){
        printf("%d ", angka[i]* (i + 1));
    }
}
