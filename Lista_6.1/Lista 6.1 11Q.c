#include<stdio.h>

int main (){


    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    while (num>=0) {

     if(num%10==0) printf("%d e divisivel por 10\n", num);
     else printf("%d nao e divisivel por 10\n",num);

     printf("Digite um numero inteiro: \n");
    scanf("%d",&num);

    }






}
