#include<stdio.h>

int main(){

int i,valor[10];

    for(i=0;i<10;i++){
        printf("Digite um valor: ");
            scanf("%d",&valor[i]);
    }
    for(i=0;i<10;i++)
            if(valor[i]%2==0)
                printf("%d\n",valor[i]);

}
