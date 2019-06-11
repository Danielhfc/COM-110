#include<stdio.h>
#include<string.h>
int main(){
char cadeia[51];
int n,i,vetor[10];

printf("Qual o valor de N? ");
    scanf("%d",&n);

for(i=0;i<n;i++){
    printf("Digite a cadeia de caracteres: ");
        scanf(" %[^\n]",cadeia);
    vetor[i]=strlen(cadeia);
}
    for(i=0;i<n;i++)
printf("A cadeia %d tem tamanho %d\n",i+1,vetor[i]);


}
