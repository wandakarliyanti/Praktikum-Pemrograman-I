#include<stdio.h>

int main(){

int n, i;
char s;
i=1;
while(i<=3){
scanf("%d %c", &n, &s);

    for(int j=1;j<=50;j++){
            if(j%n==0){
                printf("%c ", s);}
            else{
                printf("%d ", j);}
}
    i+=1;
}
}
