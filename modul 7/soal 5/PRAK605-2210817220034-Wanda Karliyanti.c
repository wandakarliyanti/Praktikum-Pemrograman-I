#include <stdio.h>

int main(){
    int m1[10][10], m2[10][10], h[10][10];
    int i,j,k,n,jumlah=0;
    scanf("%d", &n);
    printf("Matriks A\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &m1[i][j]);
        }
    }
        printf("Matriks B\n");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&m2[i][j]);
            }
        }
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    for(k=0; k<n; k++){
                        jumlah=jumlah+m1[i][k]*m2[k][j];
                    }
                        h[i][j]= jumlah;
                        jumlah=0;
                }
            }
                        printf("\nMatriks AXB\n");
                        for(i=0;i<n;i++){
                            for(j=0;j<n;j++){
                                printf("%d ", h[i][j]);
                            }
                                printf("\n");
                        }
}
