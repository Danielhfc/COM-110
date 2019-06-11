#include<stdio.h>
#include<string.h>
int main(){
char cadeia[100],letra,cont=0,i;

printf("Digite uma cadeia de caracteres: ");
    scanf(" %[^\n]",cadeia);
printf("Digite uma letra: ");
    scanf(" %c",&letra);

while(cadeia[i]!='\0'){
if(letra==cadeia[i])
    cont++;
    i++;
}

printf("A letra %c aparece %d vezes",letra,cont);
}
