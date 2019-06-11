#include<stdio.h>


int main(){

   float a,b,c,d,n;


   printf("Determine o intervalo [a,b] ");
   scanf("%f %f", &a, &b);

   printf("Determine o intervalo [c,d] ");
   scanf("%f %f", &c, &d);

   printf("Digite um numero ");
   scanf("%f", &n);

   if (n<a || n>d) printf("%f nao pertence a nenhum intervalo", n);

   if (n>a && n<d){
     if (n>c) printf("%f pertence a ambos os intervalos",n);
     else printf("%f pertece apenas ao intervalo [%f,%f]",n,a,b);
   }
}
