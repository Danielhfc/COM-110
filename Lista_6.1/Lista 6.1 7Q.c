#include<stdio.h>

int main(){

    int i,j;
    double soma;

    soma=0;

    for(i=1;i<=37;i++){

       soma=(((38-i)*(39-i))/i)+soma;


    }

printf("%f\n",soma);

//A professora fez assim:

soma=0;
j=37;

   for(i=1;i<=37;i++){
        soma=soma+((j*(j+1))/i);
        j=j-1;

   }

   printf("%f",soma);




}
