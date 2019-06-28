// Elabore um algoritmo que calcule e imprima o resultado da soma abaixo:
// S=1-2/4+3/9-4/16+5/25-...-10/100
#include<stdio.h>
int main(){
int i,sinal=-1;
float s=1;
for(i=2;i<=10;i++){
s=s+(sinal*(i/(float)(i*i)));
sinal=sinal*-1;
}
printf("Soma = %f",s);
}
