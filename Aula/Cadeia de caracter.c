//Leia uma cadeia de caracter, caracter por caracter e armazene em um vetor(max 100 elementos).
#include<stdio.h>
#include<string.h>
int main(){
char nome1[100],nome2[100];

printf("Digite o nome: ");
    scanf(" %s",nome1);
printf("Digite outro nome: ");
    scanf(" %[^\n]",nome2);
printf("%s\n%s\n",nome1,nome2);

strcpy(nome1,"Maria");
strcpy(nome2,nome1);

printf("%s\n%s",nome1,nome2);

}
