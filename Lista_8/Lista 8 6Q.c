#include<stdio.h>
// A variavel temp nao pode ser ponteiro.
// Com o uso da temp, inverte-se os valores dos ponteiros.
int main(){
int *q, *p, temp;
int i=1,j=2;
p = &i;
q = &j;
temp = *p;
*p= *q;
*q = temp;
printf("%d,%d",*p,*q);
}
