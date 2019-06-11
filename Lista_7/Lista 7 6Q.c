#include<stdio.h>
void cab(){

printf("Curso Ciencia da Computacao\n");
printf("Disciplina: Fundamentos de Programacao\n");
printf("Universidade Federal de Itajuba\n\n");
return;
}

int prova(int media){
     if (media>=7) return'A';
     if (media>=5 && media<7) return'E';
     if (media>=0 && media<5) return'R';
}

int main(){
 cab();
   int media,mat,n,i;
   char aprv;

   printf("Quantos alunos estao na lista? ");
    scanf("%d",&n);
   for(i=1;i<=n;i++){
       printf("Digite a matricula do aluno: ");
        scanf("%d",&mat);
       printf("Digite a media final do aluno: \n");
        scanf("%d",&media);
           aprv = prova(media);

  printf("Conceito do aluno: %c\n",aprv);
  printf("Matricula do aluno: %d\n\n",mat);

}

}
