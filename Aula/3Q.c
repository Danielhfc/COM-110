#include<stdio.h>

int main (){

int num[30],x,y,soma=0;
    for(int i=0; i<30; i++){
        printf("Digite o numero:\n");
        scanf("%d",&num[i]);
        }

    printf("\nDigite os valores de X e Y: ");
    scanf("%d %d",&x,&y);

    for(int i=x; i<=y; i++){
        soma=num[i]+soma;
    }
    printf("A soma e: %d",soma);





}
