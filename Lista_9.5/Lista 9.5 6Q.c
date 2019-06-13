#include<stdio.h>
#include<string.h>
int comparacao(char matriz[][101],char nome[],int n){
int i;
for(i=0;i<n;i++)
    if(strcmp(matriz[i],nome)==0)
    return i+1;
return -1;
}

void preencher(char matriz[50][101],int *n){
int i;
printf("Quantos nomes serao lidos?");
scanf("%d",n);

printf("Digite o nome das matrizes: ");
for(i=0;i<*n;i++)
    scanf(" %[^\n]",matriz[i]);
}

int main(){
int n,teste;
char nome[]={"Joao Francisco da Silva"},matriz[50][101];

preencher(matriz,&n);
teste = comparacao(matriz,nome,n);
printf("%d",teste);
}
