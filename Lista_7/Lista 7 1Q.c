#include<stdio.h>
int soma(int n1, int n2){

int s;
s= n1+n2;
return s;

}

void imprime(int s,int a,int b){

printf("A soma {%d,%d} e = %d",a,b,s);
return;

}

int main(){

   int a,b,s;

   printf("Digite o valor de a: ");
    scanf("%d",&a);
   printf("Digite o valor de b: ");
   scanf("%d",&b);
s = soma(a,b);
imprime(s,a,b);

}
