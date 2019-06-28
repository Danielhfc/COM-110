/* Suponha que, em 2019, a popula��o dos EUA seja maior que a popula��o do Brasil. Sabendo-se que os Estados Unidos possuem um crescimento anual de 3%
na sua popula��o e que o Brasil tem crescimento anual de 6%, determine o ano em que a popula��o do Brasil ser� maior que a popula��o dos EUA. Os valores
atuais da popula��o dos dois pa�ses dever�o ser fornecidos pelo usu�rio. Esses valores devem ser positivos e a popula��o dos EUA deve ser, obrigatoriamente,
maior que a popula��o do Brasil, caso n�o seja, dever� ser emitida uma mensagem informando que a entrada est� inv�lida e programa dever� ser encerrado.*/
#include<stdio.h>
int main(){
int popEUA,popBR,ano=2019;

printf("Digite a populacao dos EUA: ");
scanf("%d",&popEUA);
printf("Digite a populacao do Brasil: ");
scanf("%d",&popBR);

if((popEUA<=0) || (popBR<=0) || (popBR>popEUA)){
   printf("Entrada invalida!");
}
else{
    while(popEUA>popBR){
        popEUA=popEUA+popEUA*0.03;
        popBR=popBR+popBR*0.06;
        ano++;
    }
    printf("Ano em que a populacao do Brasil sera maior que a dos EUA: %d",ano);
}
}
