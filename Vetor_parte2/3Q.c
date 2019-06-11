#include<stdio.h>
int main(){
int i,vetorA[9],vetorB[9],vetorC[9],vetorD[9];

for(i=0;i<9;i++){
    printf("Digite o valor do vetor A: ");
        scanf("%d",&vetorA[i]);
}

for(i=0;i<9;i++){
    printf("Digite o valor do vetor B: ");
        scanf("%d",&vetorB[i]);
}

for(i=0;i<9;i++){
    printf("Digite o valor do vetor C: ");
        scanf("%d",&vetorC[i]);
}

for(i=0;i<9;i++){
    if(i<3)
        vetorC[i]=vetorA[i];
    else if(i>2 && i<6)
        vetorC[i]=vetorB[i];
    else if(i>5)
        vetorD[i]=vetorC[i];
}
for(i=0;i<9;i++)
    printf("%d ",vetorC[i]);
}
