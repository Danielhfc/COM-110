#include<stdio.h>

int valor(int n1, int  n2){

 if (n1>n2) printf("Os valores em ordem crescente sao : %d %d",n2,n1);
 else printf("Os valores em ordem crescente sao: %d %d",n1,n2);
}

int main(){

   int num1,num2;

   printf("Digite os valores ");
    scanf("%d %d",&num1,&num2);
valor(num1,num2);




}
