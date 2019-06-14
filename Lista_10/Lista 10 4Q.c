#include<stdio.h>
#include<string.h>
typedef struct produto{
int cod;
float preco;
}produto;

float retornoPreco(produto *p,int codigo){
int i;
for(i=0;i<100;i++)
    if(codigo==p[i].cod)
    printf("%f\n",p[i].preco);
}

void ajuste(produto *p,float porcent){
int i;
for(i=0;i<100;i++)
    p[i].preco=p[i].preco+p[i].preco*porcent;
}

void imprime(produto *p){
int i;
for(i=0;i<100;i++)
    printf("Codigo: %d\nPreco: %f\n\n",p[i].cod,p[i].preco);
}

int main(){
produto p[100];
int i,codigo;
float porcent;

for(i=0;i<100;i++){
printf("Digite o codigo e o preco do produto: ");
scanf("%d %f",&p[i].cod,&p[i].preco);
}
//Letra A
printf("Qual o codigo do produto a ser procurado? ");
scanf("%d",&codigo);
retornoPreco(p,codigo);
//Letra B
printf("Qual a porcentagem do aumento? ");
scanf("%f",&porcent);
porcent=porcent/100;
ajuste(p,porcent);
//Letra C
imprime(p);
}
