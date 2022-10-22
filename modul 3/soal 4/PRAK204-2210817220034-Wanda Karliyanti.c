#include<stdio.h>

int main(){
    for(int z=1;z<=2;z++){
float r, t, V, l, k;

scanf("%f %f", &r, &t);
V=3.142857*r*r*t;
l=2*3.142857*r*(r+t);
k=2*3.142857*r;
printf("Volume = %.2f\n", V);
printf("Luas =  %.2f\n", l);
printf("Keliling = %.2f", k);}

}
