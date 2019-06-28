/* Elabore um algorítmo que leia uma lista de números inteiros até que o número -1 seja digitado. Para cada número lido, caso o número seja maior
que 0, escreva o fatorial do número. Caso contrário, informe o usuário que a entrada é inválida e solicite o próximo número */
#include<stdio.h>
int main(){
int i, num,fat=1;

printf("Digite um numero: ");
scanf("%d",&num);
while(num != -1){
if(num<0)
    printf("Entrada invalida!\n");
else{
    for(i=num;i>1;i--)
        fat=fat*i;
    printf("O fatorial de %d e: %d\n",num,fat);
    fat=1;
}
printf("Digite um numero: ");
scanf("%d",&num);
}
}

