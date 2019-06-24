#include<stdio.h>
int main(){
int i,j,vet1[15],vet2[15];

for(i=0;i<15;i++){
printf("Digite os numeros do vetor: ");
scanf("%d",&vet1[i]);
}
for(i=0;i<15;i++){
    vet2[i]=1;
    for(j=vet1[i]-1;j>1;j--)
    vet2[i]=vet2[i]*vet1[j];
}
for(i=0;i<15;i++){
printf("Numero da posicao %d: %d\n",i+1,vet2[i]);
}
}
