/* Suponha que, em 2019, a população dos EUA seja maior que a população do Brasil. Sabendo-se que os Estados Unidos possuem um crescimento anual de 3%
na sua população e que o Brasil tem crescimento anual de 6%, determine o ano em que a população do Brasil será maior que a população dos EUA. Os valores
atuais da população dos dois países deverão ser fornecidos pelo usuário. Esses valores devem ser positivos e a população dos EUA deve ser, obrigatoriamente,
maior que a população do Brasil, caso não seja, deverá ser emitida uma mensagem informando que a entrada está inválida e programa deverá ser encerrado.*/
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
