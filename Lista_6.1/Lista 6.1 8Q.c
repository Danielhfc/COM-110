#include<stdio.h>


int main(){

   int i,j;
   float soma;

   j=1;
   soma=0;

   for (i=1;i<=50;i++){
     soma=(j/i)+soma;
     j=j+2;
}

    printf("O valor do somatorio e: %f",soma);






}
