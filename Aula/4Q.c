#include<stdio.h>

int main (){

    int vetorA[20], vetorB[20];

    for(int i=0; i<5; i++){
        printf("\nDigite o numero: ");
        scanf("%d",&vetorA[i]);
    }

    for(int i=0; i<5; i++){
        if(vetorA[i]%2==0){
            vetorB[i]=vetorA[i];
        }
        else vetorB[i]=vetorA[i]*2;
    }

    for(int i=0; i<5; i++){
        printf("\n\nO valor da segunda funcao e: %d\n", vetorB[i]);
    }
}
