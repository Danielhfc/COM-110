#include<stdio.h>

void aumento(float *valor,int porcent){

    float perc = porcent;
    perc = perc/100;
    *valor = *valor + (*valor*perc);

}

int main (){

    float valor , result;
    int porcent,i,prod;

    printf("Quantos produtos serao calculados? ");
     scanf("%d",&prod);

    for(i=1;i<=prod;i++){

        printf("Qual o valor do produto e qual a porcentagem de aumento? ");
         scanf("%f %d",&valor,&porcent);
        aumento(&valor,porcent);
        printf("O valor do produto com aumento e : %f\n",valor);

    }



}
