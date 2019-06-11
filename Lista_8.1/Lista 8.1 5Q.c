#include<stdio.h>

void invertido(int num){
int i;
    for(i=1;i<=3;i++){
    if(num%10 == 0)
        printf("zero ");
    else if(num%10 == 1)
        printf("um ");
        else if(num%10 == 2)
        printf("dois ");

        else if(num%10 == 3)
        printf("tres ");

        else if(num%10 == 4)
        printf("quatro ");

        else if(num%10 == 5)
        printf("cinco ");

        else if(num%10 == 6)
        printf("seis ");

        else if(num%10 == 7)
        printf("sete ");

        else if(num%10 == 8)
        printf("oito ");

        else if(num%10 == 9)
        printf("nove ");
num = num/10;
    }

}

int main(){

    int num;

    printf("Digite um numero de 3 digitos: ");
        scanf("%d",&num);

        invertido(num);



}
