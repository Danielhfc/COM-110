#include<stdio.h>

int main(){

int mat[5][8],i,j;

    for(i=0;i<5;i++)
    for(j=0;j<8;j++){
        printf("Digite um valor: ");
            scanf("%d",&mat[i][j]);
    }
    printf("\n");
    for(i=0;i<5;i++){
            printf("|");
    for(j=0;j<8;j++)
        printf("%d ",mat[i][j]);
    printf("|\n");
    }
}
