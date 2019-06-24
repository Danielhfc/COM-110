#include<stdio.h>
#include<string.h>
struct livro{
char titulo[16],autor[21],estilo[11];
int codigo;
float preco;
};

// definição da função menu( ):
void menu(char *ch) {
printf(" Digite I para incluir um livro. \n");
printf(" Digite L para listar o nome de todos os livros. \n");
printf(" Digite A para procurar livro por autor. \n");
printf(" Digite T para procurar livro por título. \n");
printf(" Digite E para procurar livro por estilo. \n");
printf(" Digite M para calcular a média de preço de todos os livros. \n");
printf( " Digite S para sair \n");
scanf(" %c",ch);
}

void incluir_liv(struct livro *a,int *num){
printf("Qual o titulo? ");
scanf(" %[^\n]",a[*num].titulo);
printf("Qual o autor? ");
scanf(" %[^\n]",a[*num].autor);
printf("Qual o estilo? ");
scanf(" %[^\n]",a[*num].estilo);
printf("Qual o codigo? ");
scanf("%d",&a[*num].codigo);
printf("Qual o preco? ");
scanf("%f",&a[*num].preco);
*num=*num+1;
}
void lista_liv(struct livro *a,int num){
int i;
for(i=0;i<num;i++)
        printf("%s\n",a[i].titulo);
}

void proc_autor(struct livro *a,int num){
int i;
char procurado[21];
printf("Digite o nome do autor a ser procurado: ");
scanf(" %[^\n]",procurado);
for (i=0;i<num;i++)
    if(strcmp(procurado,a[i].autor)==0){
        printf("%s\n",a[i].titulo);
        printf("%s\n",a[i].estilo);
        printf("%d\n",a[i].codigo);
        printf("%f\n\n",a[i].preco);
    }
}

void proc_titulo(struct livro *a,int num){
int i;
char procurado[16];
printf("Digite o titulo a ser procurado: ");
scanf(" %[^\n]",procurado);
for(i=0;i<num;i++)
    if(strcmp(procurado,a[i].titulo)==0){
        printf("%s\n",a[i].titulo);
        printf("%s\n",a[i].autor);
        printf("%s\n",a[i].estilo);
        printf("%d\n",a[i].codigo);
        printf("%f\n\n",a[i].preco);
    }
}

void proc_estilo(struct livro *a,int num){
int i;
char procurado[11];
printf("Digite o estilo a ser procurado: ");
scanf(" %[^\n]",procurado);
for(i=0;i<num;i++)
    if(strcmp(procurado,a[i].estilo)==0){
        printf("%s\n",a[i].autor);
        printf("%d\n",a[i].codigo);
        printf("%f\n\n",a[i].preco);
    }
}

void media_preco(struct livro *a,int num){
int i;
float media=0,cont;
for(i=0;i<num;i++){
    media = media+a[i].preco;
    cont++;
}
media=media/cont;
printf("A media dos precos e: %.2f\n",media);
}

int main(){
// declaração de variáveis
struct livro vetlivro[50];
char ch;
int numlivros = 0; // numero de livros
// definição da função principal
menu(&ch);
while (ch != 'S') {
switch(ch) {
case 'I': incluir_liv(vetlivro,&numlivros); break;
case 'L': lista_liv(vetlivro,numlivros); break;
case 'A': proc_autor(vetlivro,numlivros); break;
case 'T': proc_titulo(vetlivro,numlivros); break;
case 'E': proc_estilo(vetlivro,numlivros); break;
case 'M': media_preco(vetlivro,numlivros); break;
} // fim do switch
menu(&ch);
}
} // fim da função main.
