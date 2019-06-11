#include<stdio.h>

int main(){

   int notas,num;

   notas=1000;
   num=0;

   while (notas>0 && num>=0){

    printf("Digite um valor: ");
    scanf("%d",&num);

    if(num%10==0) {
            notas = notas-(num/10);
        if(notas>0) printf("A quantidade de notas e %d\n",notas);
    }
    if(num%10!=0 && num>=0) printf("%d nao e multiplo de 10\n",num);

   }
   if (notas<=0) printf("As notas acabaram");
}
