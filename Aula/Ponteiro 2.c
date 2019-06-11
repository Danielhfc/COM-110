#include<stdio.h>

int main(){

    int a,*pi;
    char l,*pc;
a = 10;
l = 'm';

pi = &a;
pc = &l;

printf("O valor de a e: %d\n",*pi);
printf("O valor de l e: %c\n",*pc);

printf("Qual o valor de a?\n");
scanf("%d",pi);
printf("Qual o caracter de L?\n");
scanf(" %c", pc);

printf("O valor de a e: %d\n",*pi);
printf("O valor de l e: %c\n",*pc);


}
