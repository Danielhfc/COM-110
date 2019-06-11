#include<stdio.h>
void cab(){

printf("Curso Ciencia da Computacao\n");
printf("Disciplina: Fundamentos de Programacao\n");
printf("Universidade Federal de Itajuba\n\n");
return;
}

char prova(int media){
     if (media>=7) return'A';
     if (media>=5 && media<7) return'E';
     if (media>=0 && media<5) return'R';
}

int main(){
 cab();
   int media;
   char aprv;

   printf("Digite a media final do aluno: ");
    scanf("%d",&media);
aprv = prova(media);

  printf("Conceito do aluno: %c",aprv);

}
