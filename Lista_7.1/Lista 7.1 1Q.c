#include<stdio.h>
void cab(int n1){
printf("Programa de Treinamento em C\n");
printf("Universidade Federal de Itajuba\n");
printf("Curso Ciencia da Computacao\n");
printf("Nome:%30d",n1);
return;
}

int main(){
   int ano;

   printf("Digite o ano: ");
    scanf("%d", &ano);
cab(ano);
}
