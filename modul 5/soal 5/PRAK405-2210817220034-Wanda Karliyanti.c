#include <stdio.h>

int main(){

int a, b, i, j, k, o, p, q, hasil, t;
i=1;
while(i<=3){
scanf("%d %d", &a, &b);

for (j = 1; j <=a; j++){
    for(k=j; k>1; k--){
        printf("(%d*%d) + ", k, b);}
    for(o=1, hasil=o*b; o<j; o++, hasil+=(o*b));{
        printf("(%d*%d) = %d\n",k,b,hasil);}
    for (p=1,q=1,t=0; p<=a; q+=p+1,p++){
        t+=q*b;}
}
    printf("%d",t);
    i+=1;
}
}
