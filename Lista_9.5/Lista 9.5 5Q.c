#include<stdio.h>
#include<string.h>
void preencher(char matriz[50][101]){
int i;
printf("Digite o nome dos alunos: ");
for(i=0;i<10;i++)
    scanf(" %[^\n]",matriz[i]);
}
void troca(char nome[101],char matriz[50][101],int aluno){

strcpy(matriz[aluno-1],nome);
}
int main(){
int i,aluno;
char matriz[10][101],nome[101];
printf("Qual a posicao do nome a ser substituido? ");
scanf("%d",&aluno);
printf("Qual o nome novo? ");
scanf(" %[^\n]",nome);

preencher(matriz);
troca(nome,matriz,aluno);

for(i=0;i<10;i++)
printf("%s\n",matriz[i]);
}


