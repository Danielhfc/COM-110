#include<stdio.h>

int main(){

   int num1;

   printf("Digite um numero: ");
   scanf("%d", &num1);

   if (num1%5==0 && num1%3==0){
   printf("%d e divisivel por 5 e por 3",num1);

   }
   else printf("%d nao e divisel por 5 e por 3",num1);



}
