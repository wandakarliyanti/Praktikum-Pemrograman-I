#include <stdio.h>

int main(){

int n, i;
i=1;
while(i<=3){
scanf("%d", &n);

    for(int j=1; j<=n; j++){
        if(j%2 == 1){
            printf("%d ", j);}
}
    printf("\n");
    for(int j=n; j>=1; j--){
        if (j%2 == 0){
            printf("%d ", j);}
}
    printf("\n");
    i+=1;
}
}
