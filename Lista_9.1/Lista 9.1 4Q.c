#include<stdio.h>

int main(){

int mat[5][5],i,j;

for(i=0;i<5;i++)
    for(j=0;j<5;j++){
        printf("Digite um valor: ");
            scanf("%d",&mat[i][j]);

    }
    printf("Diagonal principal:\n");
for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        if(i==j)
            printf("%d  ",mat[i][j]);
    printf("\nDiagonal secundaria:\n");
for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        if((j+1)+(i+1)==6)
            printf("%d  ",mat[i][j]);
}
