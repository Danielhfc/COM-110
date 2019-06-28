#include<stdio.h>
typedef int inteiro;
typedef float decimal;
int main () {
char teste[]={"teste"};
inteiro codigo;
decimal preco;
printf("%s",teste);
printf("\nDigite o codigo e o preco do produto: ");
scanf("%d %f", &codigo, &preco);
return 0;
}
