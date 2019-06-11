#include<stdio.h>

int main(){

int A[5][5],B[5][5],C[5][5]={0},i,j,k;

for(i=0;i<5;i++)
    for(j=0;j<5;j++){
        printf("Digite o valor da matriz A: ");
            scanf("%d",&A[i][j]);
    }
for(i=0;i<5;i++)
    for(j=0;j<5;j++){
        printf("Digite o valor da matriz B: ");
            scanf("%d",&B[i][j]);
    }
for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        for(k=0;k<5;k++)
        C[i][j]=C[i][j]+(A[i][k]*B[k][j]);

for(i=0;i<5;i++){
    printf("|");
    for(j=0;j<5;j++)
        printf(" %d",C[i][j]);
        printf(" |\n");
}
}
