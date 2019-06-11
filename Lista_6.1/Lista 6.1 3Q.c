#include<stdio.h>

int main(){

   float media,exame,b1,b2;

   printf("Quais as notas do aluno? ");
   scanf("%f %f", &b1, &b2);

   media=(b1+b2)/2;

   if (media>=6) printf("O aluno foi aprovado");
   if (media<3 && media>0) printf("O aluno foi reprovado");
   if (media>=3 && media<6){
      printf("O aluno ficou de exame\n");
      printf("Qual a nota do exame? ");
      scanf("%f", &exame);
      if (exame>=6){
        printf("O aluno foi aprovado");
      }
      else printf("O aluno foi reprovado");
   }


}
