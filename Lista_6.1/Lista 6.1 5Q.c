#include<stdio.h>


int main(){


    int i, n,m;


    printf("Digite dois numeros, sendo o segundo maior que o primeiro: ");
    scanf("%d %d", &n, &m);

    if(n%2==0){
      printf("Os numeros pares do intervalo [%d,%d] sao:",n,m);
    for(i=n+2;i<m;i=i+2) printf("\n%d",i);
    }

    else{
      printf("Os numeros pares do intervalo [%d,%d] sao:",n,m);
    for(i=n+1;i<m;i=i+2) printf("\n%d",i);
    }
}



