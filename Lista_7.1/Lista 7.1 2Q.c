#include<stdio.h>
int op(int n1,int n2,char car){
if (car=='A') return n1+n2;
   else if (car=='S') return n1-n2;
        else if (car=='M') return n1*n2;
             else return n1/n2;
    }

int main(){

   int num1,num2;
   char car;

   printf("Digite dois numeros: ");
    scanf("%d %d", &num1,&num2);
   printf("Para adicao, digite 'A'\nPara subtracao, digite 'S'\nPara multiplicar, digite 'M'\nPara dividir, digite 'D'\n");
    scanf(" %c",&car);
     if ((car!='A') && (car!='S') && (car!='M') && (car!='D'))
        printf("Dados invalidos");
           else if (car=='D' && num2==0)
                printf("Nao e possivel dividir por zero");
                      else if (car=='A')
                           printf("A soma e = %d",op(num1,num2,car));
                                else if (car=='S')
                                      printf("A subtracao e = %d",op(num1,num2,car));
                                             else if (car=='M')
                                                       printf("A multiplicacao e = %d",op(num1,num2,car));
                                                               else if (car=='D')
                                                                       printf("A divisao e = %d",op(num1,num2,car));

}
