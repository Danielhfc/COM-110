#include<stdio.h>

void limite(int n, int *min, int *max){
int i,num;
    printf("Digite um valor: ");
        scanf("%d", max);
    *min = *max;
    for (i=2;i<=n;i++){
        printf("Digite um valor: ");
            scanf("%d",&num);
        if (num>*max)
            *max = num;
        else if (num<*min)
            *min = num;

    }


}

int main(){

int n, min, max;

    printf("Digite a quantidade de numeros a serem lidos: ");
        scanf("%d",&n);
limite(n,&min,&max);
    printf("O menor numero e: %d\n", min);
    printf("O maior numero e: %d\n", max);


}

