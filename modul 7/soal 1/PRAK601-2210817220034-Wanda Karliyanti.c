#include<stdio.h>

int main(){
int b, k, i, j, a;
scanf("%d %d", &b, &k);

int angka[b][k];
for(i=0;i<b;i++){
    for(j=0;j<k;j++){
        scanf("%d", &a);
        angka[i][j]=a;
    }
}
printf("\n");
for(i=0;i<b;i++){
    for(j=0;j<k;j++){
        printf("%d ", angka[i][j]);
    }
    printf("\n");
}
}
