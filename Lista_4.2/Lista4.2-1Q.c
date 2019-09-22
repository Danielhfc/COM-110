#include<stdio.h>

int main(){

   int peca,falta;
   float sal,abono1,abono2,abono3;


   printf("Qual o valor liquido do salario do funcionario? ");
   scanf("%f", &sal);
   printf("Quantas faltas o funcionario possui?");
   scanf("%d", &falta);
   printf("Quantas pecas o funcionario produziu nos ultimos 12 meses?");
   scanf("%d", &peca);

   abono1=(sal*3/100)+sal;
   abono2=(sal*2/100)+sal;
   abono3=(sal*3/100)+(sal*2/100)+sal;

   if ((peca>120) && (falta>0)){
        printf("O salario do funcionario com 3%% de abono = %f ", abono1);

   }
   if (peca<=120 && falta==0){
        printf("O salario do funcionario com 2%% de abono = %f", abono2);

   }
   if ((peca>120) && (falta==0)) {
        printf("O salario do funcionario com 5%% de abono = %f", abono3);

   }
}
