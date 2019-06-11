#include<stdio.h>

int main(){

int mat[10][10],i,j,m,max,minimax,linha=0;

    printf("Qual a dimensao da matriz? ");
        scanf("%d",&m);
for(i=0;i<m;i++)
    for(j=0;j<m;j++){
        printf("Digite um valor: ");
            scanf("%d",&mat[i][j]);
    }
max = mat[0][0];
for(i=0;i<m;i++)
    for(j=0;j<m;j++)
            if(mat[i][j]>max)
                linha=i;
minimax = mat[linha][0];
    for(j=0;j<m;j++)
    minimax = mat[linha][j];

printf("O minimax e: %d",minimax);

}
