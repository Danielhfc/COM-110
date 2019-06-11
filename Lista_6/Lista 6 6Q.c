#include<stdio.h>


int main(){

   float nota1,nota2,media;


   printf("Digite as duas notas: ");
   scanf("%f %f",&nota1,&nota2);

   media = (nota1*6 + nota2*4)/10;

   printf("A media e: %f",media);
}
