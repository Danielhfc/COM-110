#include<stdio.h>

int main(){

int i,codigo[20],imaior;
float valor[20],maior;

    for(i=0;i<20;i++){
        printf("Digite o codigo do produto: ");
            scanf("%d",&codigo[i]);
        printf("Digite o valor do produto: ");
            scanf("%f",&valor[i]);
    }
maior = valor[0];
    for(i=1;i<20;i++){
        if(valor[i]>maior){
            maior = valor[i];
            imaior = i;
        }
    }
            printf("O codigo do produto com maior valor e: %d",codigo[imaior]);
}
