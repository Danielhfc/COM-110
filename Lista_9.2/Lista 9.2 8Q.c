#include<stdio.h>
int i,n,codigo[100],idade[100];
float sal[100];
void informacao(int codigo[],int idade[],float sal[]){
for(i=0;i<100;i++){
    printf("Qual o codigo do funcionario? ");
        scanf("%d",&codigo[i]);
if(codigo[i]==0)
break;
    printf("Qual a idade do funcionario? ");
        scanf("%d",&idade[i]);
    printf("Qual o salario do funcionario? ");
        scanf("%f",&sal[i]);
printf("\n");
n++;
}
}

void velho(int codigo[],int idade[]){
int maisvelho = idade[0],codigovelho;

for(i=0;i<n;i++)
    if(idade[i]>maisvelho)
        codigovelho = i;
printf("O codigo do funcionario mais velho e: %d\n",codigo[codigovelho]);
}

void ricos(int codigo[],int idade[],float sal[]){
float media=0, quantidade = n;
for(i=0;i<n;i++)
    media = media+sal[i];
    media = media/quantidade;
printf("Acima da media\n");
for(i=0;i<n;i++)
    if(sal[i]>media)
    printf("Codigo: %d\nidade: %d\n",codigo[i],idade[i]);

}

int main(){

informacao(codigo,idade,sal);
velho(codigo,idade);
ricos(codigo,idade,sal);
}
