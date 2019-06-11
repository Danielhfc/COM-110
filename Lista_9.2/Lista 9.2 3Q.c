#include<stdio.h>
int i;
void soma(float salario[20],float acrescimo,int n){
for(i=0;i<n;i++)
    salario[i] = salario[i]+acrescimo;
}
int main(){
float salario[20],acrescimo;
int n;

printf("Quantos funcionarios serao atualizados? ");
    scanf("%d",&n);
printf("Qual o valor a ser acrescentado nos salarios? ");
    scanf("%f",&acrescimo);

for(i=0;i<n;i++){
    printf("Digite o salario do funcionario: ");
        scanf("%f",&salario[i]);
        }
soma(salario,acrescimo,n);

for(i=0;i<n;i++)
    printf("%f\n",salario[i]);
}
