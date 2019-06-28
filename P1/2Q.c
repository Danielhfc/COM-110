/* Elabore um algorítmo que leia a idade (inteiro), o peso (valor com casas decimais) e o sexo (um caracter) de N pessoas (N deve ser fornecido
pelo usuário e deve ser maior ou igual a 0 e igual ou menor que 1000). Os valores da idade, do peso, e do sexo não precisam ser validados no programa.
Calcule e imprima:
a) Total de homens
b) Total de mulheres
c) Total de pessoas com idade igual ou maior que 50 anos
d) Media da idade dos homens
e) Media do peso das mulheres */
#include<stdio.h>
int main(){
int i,n,idade,idade50=0,homens=0,mulheres=0;
float peso,idadeH=0,pesoM=0;
char sexo;

printf("Digite o total de pessoas: ");
scanf("%d",&n);
while(n<0 || n>1000){
    printf("O total de pessoas deve estar entre 0 e 1000\n");
    printf("Digite o total de pessoas: ");
    scanf("%d",&n);
}
if(n>0){

for(i=0;i<n;i++){
printf("\nDigite a idade: ");
scanf("%d",&idade);
while(idade<0){
    printf("A idade deve ser positiva.\n");
    printf("Digite a idade: ");
    scanf("%d",&idade);
}
if(idade>=50)
    idade50++;

printf("Digite o peso: ");
scanf("%f",&peso);
while(peso<0){
    printf("o peso deve ser positivo.\n");
    printf("Digite o peso: ");
    scanf("%d",&peso);
}

printf("Digite o sexo: ");
scanf(" %c",&sexo);
if(sexo=='H'){
    homens++;
    idadeH=idadeH+idade;
}
else{//Nao podia usar else if(sexo='M')
    mulheres++;
    pesoM=pesoM+peso;
}
}
pesoM=(float)pesoM/mulheres;
idadeH=(float)idadeH/homens;
printf("Total de homens: %d\n",homens);
printf("Total de mulheres: %d\n",mulheres);
printf("Total de pessoas com idade igual ou maior que 50: %d\n",idade50);
printf("Media da idade dos homens: %.2f\n",idadeH);
printf("Media do peso das mulheres: %.2f\n",pesoM);
}
}
