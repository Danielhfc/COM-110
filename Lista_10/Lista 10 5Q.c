#include<stdio.h>
#include<string.h>
typedef struct aluno{
    int matricula,cod;
    float ira;
    char nome[101];
}estudante;

void preencher(estudante *a,int n){
int i;
for(i=0;i<n;i++){
printf("Digite a matricula, o codigo do curso, o rendimento do aluno e o seu nome: ");
scanf("%d %d %f %[^\n]",&a[i].matricula,&a[i].cod,&a[i].ira,&a[i].nome);
}
}
//-------------------------------------------------------------------------------
void imprimir(estudante *a,int n){
int i;
for(i=0;i<n;i++){
    printf("Matricula: %d\n",a[i].matricula);
    printf("Codigo do curso: %d\n",a[i].cod);
    printf("Rendimento do aluno: %.2f\n",a[i].ira);
    printf("Nome do aluno: %s\n\n",a[i].nome);
}
}
//----------------------------------------------------------------------
void encontrar(estudante *a,int n,int mat){
int i,cont;
for(i=0;i<n;i++)
    if(mat==a[i].matricula){
        printf("Nome: %s\n",a[i].nome);
        cont=1;
    }
if(cont!=1)
    printf("Nao foi encontrado nenhum aluno com esta matricula\n");
}
//---------------------------------------------------------------------
void DadosNome(estudante *a,int n, char *nome){
int i;
for(i=0;i<n;i++)
    if(strcmp(nome,a[i].nome)==0){
    printf("Matricula: %d\n",a[i].matricula);
    printf("Codigo do curso: %d\n",a[i].cod);
    printf("Rendimento do aluno: %.2f\n\n",a[i].ira);
    }
}
//---------------------------------------------------------------------

void quantidade(estudante *a, int n,char *nome){
int i,cont=0;
for(i=0;i<n;i++)
    if(strcmp(nome,a[i].nome)==0)
        cont++;
printf("%d",cont);
}

//---------------------------------------------------------------------
int main(){
estudante a[50];
char nome1[101],nome2[101];
int n,mat;

printf("Quantos alunos? ");
scanf("%d",&n);
//Letra A
preencher(a,n);
//Letra B
imprimir(a,n);
//Letra C
printf("Qual a matricula do aluno?");
scanf("%d",&mat);
encontrar(a,n,mat);
//Letra D
printf("Qual o nome do(s) aluno(s)? ");
scanf(" %[^\n]",nome1);
DadosNome(a,n,nome1);
//Letra E
printf("Qual o nome do(s) aluno(s)? ");
scanf(" %[^\n]",nome2);
quantidade(a,n,nome2);
}
