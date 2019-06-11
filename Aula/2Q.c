#include<stdio.h>

int main (){

int numeros[30],npar=0,nimpar=0,n;
    printf("Digite o numero de numeros:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("\nDigite o numero:\n");
        scanf("%d",&numeros[i]);
    }
    for(int i=0; i<n; i++){
        if(numeros[i]%2==0) npar++;
        else nimpar++;
    }
    printf ("\nA quantidade de numeros pares e : %d", npar);
    printf ("\nA quantidade de numeros impares e : %d", nimpar);



}
