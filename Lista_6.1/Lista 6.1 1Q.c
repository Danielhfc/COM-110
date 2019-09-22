#include<stdio.h>


int main(){

    int num1;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    if(num1%2==0) printf("%d e par",num1);
    else printf("%d e impar", num1);


}
