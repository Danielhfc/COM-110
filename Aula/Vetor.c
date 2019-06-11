#include<stdio.h>

int main(){

int i;
float numeros[10],media=0;

for(i=0;i<10;i++){

    printf("Digite um numero: ");
        scanf("%f",&numeros[i]);
    media = media+numeros[i];
}
media = media/10;

for(i=0;i<10;i++)
    if(numeros[i]>media)
        printf("%f\n",numeros[i]);



}
