#include<stdio.h>


int main(){


   int i,j;
   float soma;

   j=500;
   soma=0;
   for(i=2;i<=26;i++){

    soma=(j/i)+soma;
    j=j-20;

   }

   printf("O valor do somatorio e: %f",soma);
}
