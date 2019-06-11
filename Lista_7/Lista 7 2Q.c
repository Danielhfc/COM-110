#include<stdio.h>

int teste(int n1){

if (n1<0) return 0;
else return 1;

}

int main(){

   int num1,n;

   printf("Digite um numero: ");
    scanf("%d", &num1);

   if(num1!=0){
n = teste(num1);

      if(n==1) printf("%d e positivo",num1);
      else printf("%d e negativo",num1);
}
else printf("Entrada invalida");
   }



