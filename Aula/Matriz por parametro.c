#include<stdio.h>
int i,j;
void soma(int matA[10][10],int matB[10][10],int matC[10][10],int n){
for(i=0;i<n;i++)
for(j=0;j<n;j++){
    matC[i][j]=matA[i][j]+matB[i][j];
}
}

int main(){
int matA[10][10],matB[10][10],matC[10][10],n;

printf("Qual a ordem das matrizes? ");
    scanf("%d",&n);

for(i=0;i<n;i++)
for(j=0;j<n;j++){
    printf("Digite um valor para a matriz A: ");
    scanf("%d",&matA[i][j]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++){
    printf("Digite um valor para a matriz B: ");
    scanf("%d",&matB[i][j]);
}
soma(matA,matB,matC,n);

for(i=0;i<n;i++){
printf("| ");
for(j=0;j<n;j++)
    printf("%d ",matC[i][j]);
printf("|\n");
}
}
