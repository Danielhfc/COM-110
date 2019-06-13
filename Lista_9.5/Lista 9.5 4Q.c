#include<stdio.h>
#include<string.h>
void troca(char nomes[2][14],char matriz[50][101],int n){
int i;

for(i=0;i<n;i++)
    if(strcmp(nomes[0],matriz[i])==0)
        strcpy(matriz[i],"destino");
}

int main(){
int i,n;
char nomes[2][14]={"origem","destino"},matriz[50][101];

printf("Quantos nomes serao lidos? ");
scanf("%d",&n);

printf("Digite o nome das matrizes: ");
for(i=0;i<n;i++)
    scanf(" %[^\n]",matriz[i]);
troca(nomes,matriz,n);
for(i=0;i<n;i++)
    printf("%s\n",matriz[i]);
}
