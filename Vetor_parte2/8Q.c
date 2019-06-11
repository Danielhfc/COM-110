#include<stdio.h>
int main(){

int vetorA[5],vetorB[25],i,cont=0;
for(i=0;i<5;i++){
    printf("Digite um valor para o vetor A ");
        scanf("%d",&vetorA[i]);
}
for(i=0;i<25;i++){
    printf("Digite um valor para o vetor B ");
        scanf("%d",&vetorB[i]);
}

for(i=0;i<25;i++)
    if(vetorA[0]==vetorB[i])
    if(vetorA[1]==vetorB[i+1])
    if(vetorA[2]==vetorB[i+2])
    if(vetorA[3]==vetorB[i+3])
    if(vetorA[4]==vetorB[i+4]){
        printf("O emparelhamento comeca no indice %d\n",i);
    cont++;
    }
    if(cont<0)
        printf("Nao existe emparelhamento");
}

