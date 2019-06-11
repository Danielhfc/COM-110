#include<stdio.h>

int main (){

    int i,sinal;
    float soma;

    soma = 0;
    sinal = -1;

    for(i=1;i<=10;i++){

        soma = sinal*(i/(i*2)) + soma;
        sinal = sinal*-1;
    }

    printf("O valor do somatorio e : %f",soma);

}
