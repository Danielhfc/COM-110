#include<stdio.h>
#include<string.h>
typedef struct produto{
int cod;
float valor;
char nome[101];
}tproduto;

void teste(tproduto *p, float tx){
    p->valor = p->valor+tx;
}

int main(){
tproduto p;
p.cod = 10;
p.valor = 100;
strcpy(p.nome,"Produto10");
printf("\n%d,%f,%s",p.cod,p.valor,p.nome);
teste(&p,10);
printf("\n%d,%f,%s",p.cod,p.valor,p.nome);
}
