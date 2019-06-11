#include<stdio.h>
int main(){
int i,vetorA[10],vetorB[5],vetorC[10],soma=0;

for(i=0;i<10;i++){
    printf("Digite o valor do vetor A: ");
        scanf("%d",&vetorA[i]);
}

for(i=0;i<5;i++){
    printf("Digite o valor do vetor B: ");
        scanf("%d",&vetorB[i]);
        soma=soma+vetorB[i];
}

for(i=0;i<10;i++){
    if((i+1)%2==0)
        vetorC[i]=soma/vetorA[i];
    else
        vetorC[i]=vetorA[i]*10;
}
for(i=0;i<10;i++)
    printf("%d ",vetorC[i]);
}
