#include<stdio.h>

int main(){

    int mat[10][10],i,j,n,soma=0;

    printf("Qual a dimensao da matriz? ");
        scanf("%d",&n);

    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
        printf("Digite um valor: ");
            scanf("%d",&mat[i][j]);
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
            if(mat[i][j]>0)
                soma = soma+mat[i][j];

    printf("A soma e: %d",soma);

}
