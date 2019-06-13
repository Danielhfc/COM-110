#include<stdio.h>
#include<string.h>
int contemnome(char nome[51],char matriz[5][51]){
int i;
for(i=0;i<5;i++)
if(strcmp(nome,matriz[i])==0)
    return 1;
}
int main(){
int i,teste,j;
char matriz[5][51], nome[51];

printf("Digite os nomes da matriz: ");
for(i=0;i<5;i++)
scanf(" %[^\n]",matriz[i]);

printf("Digite um nome: ");
scanf(" %[^\n]",nome);

teste=contemnome(nome,matriz);
printf("%d",teste);
}
