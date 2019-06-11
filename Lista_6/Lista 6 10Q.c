#include<stdio.h>


int main(){


    int num,a,b,c;

    printf("Digite um numero inteiro positivo com 3 algarismos ");
    scanf("%d",&num);

    a=num%10; //856%10=6




    c=num/10; //856/10=85
    b=c%10; //85%10=5
    c=c/10; //85/10=8

    printf("%d invertido e :%d",num,a*100+b*10+c);

}
