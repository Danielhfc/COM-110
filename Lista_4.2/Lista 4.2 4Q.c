#include<stdio.h>

int main(){

   int idade;
   char risco;


   printf("Qual a idade do segurado? ");
   scanf("%d", &idade);
   fflush(stdin);
   printf("Qual o grupo de risco do segurado? ");
   scanf("%c", &risco);

   if (idade>=18 && idade<=24){
    if (risco=='A') printf("O codigo da categoria e 7");
    if (risco=='B') printf("O codigo da categoria e 8");
    if (risco=='C') printf("O codigo da categoria e 9");
   }
   if (idade>=25 && idade<=40){
    if (risco=='A') printf("O codigo da categoria e 4");
    if (risco=='B') printf("O codigo da categoria e 5");
    if (risco=='C') printf("O codigo da categoria e 6");
   }
   if (idade>=41 && idade<=70){
    if (risco=='A') printf("O codigo da categoria e 1");
    if (risco=='B') printf("O codigo da categoria e 2");
    if (risco=='C') printf("O codigo da categoria e 3");
   }
}
