#include<stdio.h>
#include<string.h>
typedef struct aluno{
    int matricula,cod;
    float ira;
    char nome[101];
}aluno;

int passaram(aluno *a,int n,float *rmin){
int i,passou=0;
for(i=0;i<n;i++)
    if(a[i].ira>=*rmin)
        passou++;
return passou;
}
void preencher(aluno *a,int *n){
int i;
for(i=0;i<*n;i++){
printf("Digite a matricula, o codigo do curso, o rendimento do aluno e o seu nome: ");
    scanf("%d %d %f %[^\n]",&a[i].matricula,&a[i].cod,&a[i].ira,a[i].nome);

}
}

void aumento(aluno *a,int curso, float porcent,int n){
int i;
for(i=0;i<n;i++)
    if(a[i].cod==curso)
        a[i].ira=a[i].ira+a[i].ira*porcent;
}

void imprimir(aluno *a,int lista, int n){
int i;
for(i=0;i<n;i++)
if(lista==a[i].cod){
    printf("Matricula: %d\n",a[i].matricula);
    printf("Rendimento do aluno: %.2f\n",a[i].ira);
    printf("Nome do aluno: %s\n\n",a[i].nome);
}
}

int main(){
    aluno a[40];
    int n,passou,curso,lista;
    float rmin,porcent;
    char joao[]="Joao Jose da Silva";
//Letra A
    printf("Digite a quantidade de alunos: ");
    scanf("%d",&n);
    preencher(a,&n);
//Letra B
    printf("Digite o rendimento minimo: ");
    scanf("%f",&rmin);
    passou=passaram(a,n,&rmin);
    printf("Quantos possuem IRA maior que %d: %d\n",rmin,passou);
//Letra C
    printf("Qual o curso e qual a porcentagem de aumento? ");
    scanf("%d %f",&curso,&porcent);
    porcent=porcent/100;
    aumento(a,curso,porcent,n);
//Letra D
    printf("De qual curso a lista sera mostrada? ");
    scanf("%d",&lista);
    imprimir(a,lista,n);

// printf("Matricula: %d\nCodigo do curso: %d\nRendimento do aluno: %.2f\nNome do aluno: %s\n",a[0].matricula,a[0].cod,a[0].ira,a[0].nome);
}
