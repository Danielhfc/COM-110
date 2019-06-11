#include<stdio.h>

void somatorio(int n1, int n2, int *soma){

*soma = n1+n2;

}
int main(){

        int n1,n2,soma;
        printf("Digite dois numeros: ");
        scanf("%d %d", &n1,&n2);

        if(n1>n2){
            somatorio(n1,n2,&soma);
        printf("A soma dos numeros e: %d",soma);
        }
}
