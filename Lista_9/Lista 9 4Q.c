#include<stdio.h>

int main(){

int i,vezes=0;
char caracter[5],teste;

    for(i=0;i<5;i++){
        printf("Digite um caracter: ");
            scanf(" %c",&caracter[i]);
    }
    printf("Digite uma letra: ");
        scanf(" %c",&teste);

    for(i=0;i<5;i++)
        if(caracter[i]==teste)
            vezes++;

    printf("A letra %c aparece %d vezes",teste,vezes);
}
