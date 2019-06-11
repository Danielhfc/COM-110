#include<stdio.h>

int main(){

    float num1,num2,num3;

    printf("Digite dois numeros");
    scanf("%f %f",&num1, &num2);

    if(num1>num2){

       num3=num1;
       num1=num2;
       num2=num3;

     printf("O num1 e %f e o num2 e %f",num1,num2);

    }
    else printf("O num1 e %f e o num2 e %f",num1,num2);

}
