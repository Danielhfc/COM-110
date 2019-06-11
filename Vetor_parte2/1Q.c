#include<stdio.h>
int main(){
int vetor[15],maior,maiorp=0,menor,menorp=0,i;

for(i=0;i<15;i++){
    printf("Digite um valor: ");
        scanf("%d",&vetor[i]);
}
maior = vetor[0];
menor = vetor[0];
for(i=0;i<15;i++)
    if(vetor[i]>maior){
        maiorp = i;
        maior = vetor[i];
    }
    else if(vetor[i]<menor){
        menorp = i;
        menor = vetor[i];
}

printf("O maior elemento do vetor e sua posicao: %d e %d\n",maior,maiorp);
printf("O menor elemento do vetor e sua posicao: %d e %d\n",menor,menorp);

}
