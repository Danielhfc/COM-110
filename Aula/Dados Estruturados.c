//Considere uma aplica��o para governar informa��es de um produto contendo o c�digo e o vetor do produto
//Elabore um programa que leia as informa��es do teclado e escreva na tela.
#include<stdio.h>
struct produto{
int cod;
float valor;
char nome[101];
};

int main(){
struct produto a;

printf("Digite o codigo, o valor e o nome: ");
scanf("%d %f %[^\n]",&a.cod,&a.valor,a.nome);

printf("\nO codigo e %d , o valor e %.2f e o nome e %s",a.cod,a.valor,a.nome);




}
