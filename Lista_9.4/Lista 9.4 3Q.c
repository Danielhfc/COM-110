#include<stdio.h>
int main(){
char cadeia[100];
int n=0,i=0;

printf("Digite uma cadeia de caracter: ");
    scanf(" %s",cadeia);

    while(cadeia[i]!='\0'){
        n++;
        i++;
    }
printf("A cadeia tem %d caracteres",n);
}
