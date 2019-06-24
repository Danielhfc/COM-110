#include<stdio.h>
#include<stdlib.h>
void preencher(FILE *arq,int produto[][3],int n){
int i,j;
for(i=0;i<n;i++){
    fscanf(arq,"%d %d %d",&produto[i][0],&produto[i][1],&produto[i][2]);
}
rewind(arq);
}

void desconto(FILE *arq,int produto[][3],int n){
int des,i;
printf("Digite o valor do desconto: ");
scanf("%d",&des);
for(i=0;i<n;i++)
if(produto[i][2]>50)
produto[i][1]=produto[i][1]-des;

for(i=0;i<n;i++){
    fprintf(arq,"%d %d %d\n",produto[i][0],produto[i][1],produto[i][2]);
}
}

int main(){
int n,produto[10][3];
FILE *arq;
arq = fopen("Produtos.dat","r+");
if(arq==NULL){
    printf("Arquivo invalido");
    exit;
}
printf("Digite a quantidade de produtos: ");
scanf("%d",&n);

preencher(arq,produto,n);
desconto(arq,produto,n);

printf("\n");
fclose(arq);
system("pause");
}
