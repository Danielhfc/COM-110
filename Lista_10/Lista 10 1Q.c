#include<stdio.h>
#include<string.h>
typedef struct aluno{
    int matricula,cod;
    float ira;
    char nome[101];
}tproduto;
int main(){
    tproduto a;
    char joao[19]="Joao Jose da Silva";

    printf("Digite a matricula, o codigo do curso, o rendimento do aluno e o seu nome: ");
    scanf("%d %d %f %[^\n]",&a.matricula,&a.cod,&a.ira,a.nome);

    printf("Matricula: %d\nCodigo do curso: %d\nRendimento do aluno: %.2f\nNome do aluno: %s\n",a.matricula,a.cod,a.ira,a.nome);


    if(strcmp(a.nome,joao)==0)
        printf("%d",a.matricula);
    else
        printf("Aluno nao encontrado");



}
