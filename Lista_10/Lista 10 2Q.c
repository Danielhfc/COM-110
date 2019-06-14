#include<stdio.h>
#include<string.h>
struct livro{
    int cod,ano;
    char titulo[101],status;
};

void status(struct livro *livros,int n){
int i;
for(i=0;i<n;i++)
if(livros[i].ano<1950)
    livros[i].status='I';
else
    livros[i].status='A';

}

void mesmotitulo(struct livro *livros,int n){
int i,cont=0;
char titulo[101];
printf("Digite o titulo: ");
scanf(" %[^\n]",titulo);

for(i=0;i<n;i++){
if(strcmp(titulo,livros[i].titulo)==0){
    printf("O livro foi encontrado!\n");
    livros[i].ano=livros[i].ano+10;
    cont++;
    break;
}
}
if(cont=0)
    printf("O livro nao foi encontrado!\n");
}

void imprimir(struct livro *livros,int n){
int i;
for(i=0;i<n;i++){
printf("Codigo: %d\n",livros[i].cod);
printf("Titulo: %s\n",livros[i].titulo);
printf("Ano da publicacao: %d\n",livros[i].ano);
printf("Status do livro: %c\n",livros[i].status);
}
}

void data(struct livro *livros,int n){
int cod,ano,i;
char titulo[101];
printf("Digite o codigo, o titulo e o ano de publicacao do livro: ");
scanf("%d %[^\n] %d",&cod,titulo,&ano);
for(i=0;i<n;i++)
if(cod==livros[i].cod)
    livros[i].ano=ano;//livros->ano=ano;
}
int main(){
int i,n;
struct livro livros[50];
printf("Quantos livros? ");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("Digite o codigo, o titulo e o ano de publicacao do livro: ");
scanf("%d %[^\n] %d",&livros[i].cod,livros[i].titulo,&livros[i].ano);
}
//printf("Codigo: %d\nTitulo: %s\nAno da publicacao: %d\n",livros[0].cod,livros[0].titulo,livros[0].ano); //Letra B

//data(livros,n); //Letra C
//printf("%d",livros[0].ano); //Letra C
mesmotitulo(livros,n); //Letra E
status(livros,n);//Letra J
imprimir(livros,n); //Letra D
}
