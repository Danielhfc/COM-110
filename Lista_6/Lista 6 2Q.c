#include<stdio.h>

int main(){

    int num1,num2;
    double div;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    div=(double)num1/num2;

    printf("A adicao de %d e %d = %d\n",num1,num2,num1+num2);
    printf("A subtracao de %d e %d = %d\n",num1,num2,num1-num2);
    printf("A divisao de %d e %d = %f\n",num1,num2,div);
    printf("A adicao de %d e %d = %d\n",num1,num2,num1*num2);

}
