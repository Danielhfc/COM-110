#include<stdio.h>
void cab(){

printf("Curso Ciencia da Computacao\n");
printf("Disciplina: Fundamentos de Programacao\n");
printf("Universidade Federal de Itajuba\n\n");
return;
}

int soma(int n1, int n2){
   int i,s=0;
if(n1>n2){
    for(i=n2;i<=n1;i++){
        s = s+i;
    }
  return s;
}
else{
    for(i=n1;i<=n2;i++){
        s = s+i;
}
  return s;
}
}

int main(){
cab();
   int num1,num2,s;

   printf("Digite dois numeros: ");
    scanf("%d %d", &num1,&num2);

 s = soma(num1,num2);

   if(num1<num2) printf("A soma de todos os numeros no intervalo [%d,%d] e: %d",num1,num2,s);
   else printf("A soma de todos os numeros no intervalo [%d,%d] e: %d",num2,num1,s);



}
