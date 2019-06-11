#include<stdio.h>
#include<string.h>
int main(){
int i,cont=0;
char cadeia[101],fim[7]={"Acabou"};

while(strcmp(cadeia,fim)!=0){
    printf("Digite uma cadeia de caracteres: ");
    scanf(" %[^\n]",cadeia);
    if(strcmp(cadeia,fim)!=0)
        cont++;
}
printf("Foram digitadas %d cadeias",cont);
}
