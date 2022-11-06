#include<stdio.h>

int main(){

int a1, a2, i, j, k;
i=1;
while(i<=4){
scanf("%d %d", &a1, &a2);

    if(a1>a2){
        for(j=a1, k=a2;j>=a2,k<=a1;j--,k++){
            printf("%d %d", j, k);
            if(j==a2){
                break;}
            else{printf(" - ");}
}
}
    else{
        for(j=a1, k=a2;j<=a2,k>=a1;j++,k--){
            printf("%d %d", j, k);
            if(j==a2){
                break;}
            else{printf(" - ");}
}
}
    i+=1;
}
}
