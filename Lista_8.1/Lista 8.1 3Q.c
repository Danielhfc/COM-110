#include<stdio.h>

void restdiv(int *num,int *resto){

    *resto = *num%10;
    *num = *num/10;

}

int main(){

    int num, resto;

    printf("Digite um numero: ");
        scanf("%d", &num);
restdiv(&num,&resto);
    printf("O resto da divisao e: %d\n",resto);
    printf("O novo valor e: %d",num);

}
