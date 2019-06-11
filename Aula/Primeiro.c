#include<stdio.h>


int main (){

  int num1, num2 , div ;
  printf("Digite o primeiro numero ");
  scanf("%d", &num1);
  printf("Digite o segundo numero ");
  scanf("%d", &num2);


if (num2!=0){
  div=num1/num2;
  printf("A divisao de %d e %d = %d",num1,num2,div);

}
else printf("A divisao nao e possivel");

}
