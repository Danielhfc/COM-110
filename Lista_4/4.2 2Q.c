#include<stdio.h>


int main(){

    int falta, peca;
    float sal;

    printf("Qual o salario liquido do funcionario? ");
    scanf("%f",&sal);
    printf("Quantas faltas o funcionario possui? ");
    scanf("%d",&falta);
    printf("Quantas pecas o funcionario produziu nos ultimos 12 meses? ");
    scanf("%d",&peca);

    if (peca>120) printf("O salario do funcionario com 5%% de abono e: %f", sal+sal*5/100);
    else{
     if (falta==0) printf("O salario do funcionario com 2%% de abono e: %f", sal+sal*2/100);
    }

}
