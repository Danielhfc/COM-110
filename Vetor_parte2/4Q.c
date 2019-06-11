#include<stdio.h>
int main(){
int i,vetorA[10],vetorB[10],produto=0;

for(i=0;i<10;i++){
    printf("Digite o valor do vetor A: ");
        scanf("%d",&vetorA[i]);
}

for(i=0;i<10;i++){
    printf("Digite o valor do vetor B: ");
        scanf("%d",&vetorB[i]);
}
for(i=0;i<10;i++)
produto = vetorB[i]*vetorB[i]+produto;

printf("%d",produto);
}
