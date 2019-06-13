#include<stdio.h>
#include<string.h>
void preencher(char matriz[50][101]){
int n;
printf("Quantos nomes serao lidos?");
scanf("%d",&n);

printf("Digite o nome das matrizes: ");
for(i=0;i<n;i++)
    scanf(" %[^\n]",matriz[i]);
}
