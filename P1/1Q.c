/* Elabore um algor�tmo que leia uma lista de n�meros inteiros at� que o n�mero -1 seja digitado. Para cada n�mero lido, caso o n�mero seja maior
que 0, escreva o fatorial do n�mero. Caso contr�rio, informe o usu�rio que a entrada � inv�lida e solicite o pr�ximo n�mero */
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

