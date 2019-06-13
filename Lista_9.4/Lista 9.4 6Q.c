#include<stdio.h>
#include<string.h>
int main(){
int i,j;
char nomes[3][51],copia[51];
for(i=0;i<3;i++){
    printf("Digite um nome: ");
    scanf(" %[^\n]",nomes[i]);
}
for(i=0;i<2;i++)
    for(j=i+1;j<3;j++)
        if(strcmp(nomes[i],nomes[j])>0){
            strcpy(copia,nomes[i]);
            strcpy(nomes[i],nomes[j]);
            strcpy(nomes[j],copia);
    }
    printf("%s\n%s\n%s",nomes[0],nomes[1],nomes[2]);
}
