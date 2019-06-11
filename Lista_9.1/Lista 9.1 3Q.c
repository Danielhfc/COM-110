#include<stdio.h>

int main(){

int mat[2][10],i,j,quantidade=0;

for(i=0;i<2;i++)
for(j=0;j<10;j++){
    if(i==0){
        printf("Digite o codigo do produto: ");
            scanf("%d",&mat[i][j]);
}
    else{
        printf("Digite a quantidade de produtos: ");
            scanf("%d",&mat[i][j]);
}
}
for(i=1;i>=0;i--){
    if(i==1){
for(j=0;j<10;j++)
quantidade = quantidade + mat[i][j];
    printf("\nA quantidade total de produtos e: %d",quantidade);
            }
    else
for(j=0;j<10;j++)
    if(mat[1][j]>10)
        printf("\nCodigo do produto com quantidade maior que 10: %d",mat[i][j]);
    }
}
