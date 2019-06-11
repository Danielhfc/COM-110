#include<stdio.h>

int main(){

int i,n;
float notas[50],media=0;

printf("Quantas notas serao lidas? ");
scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Qual a nota do aluno? ");
            scanf("%f",&notas[i]);
    media = media+notas[i];
    }
media = media/n;
    for(i=0;i<n;i++)
        if(notas[i]>media)
            printf("\n%.2f",notas[i]);

}
