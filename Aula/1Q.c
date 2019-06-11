#include<stdio.h>

int main (){

int vetor[10], soma=0;

    for(int i=0; i<10; i++){
        printf("Digite o numero:\n");
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<10;i++){
        if(vetor[i]%2==0) soma=vetor[i]+soma;
    }
    printf("A soma e: %d",soma);

}




