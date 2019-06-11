#include<stdio.h>

void maxmin(int *max,int *min,int n){
    int i, num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    *max=num;
    *min=num;
    for(i=1;i<n;i++){
        printf("Digite o proximo numero: ");
            scanf("%d",&num);
            if (num>*max)
                *max=num;

            else if (num<*min)
                *min=num;

        }
}

int main (){
    int max,min,n;

    printf("Qual a quantidade de numeros: ");
    scanf("%d",&n);
    maxmin(&max,&min,n);
    printf("\nO maior numero e: %d",max);
    printf("\nO menor numero e: %d",min);
}

