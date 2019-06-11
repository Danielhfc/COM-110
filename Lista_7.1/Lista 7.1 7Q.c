#include<stdio.h>
void imprime(int n1,int n2,int n3){

    if(n1>n2 && n1>n3){
            if(n2>n3)
                printf("Os valores na ordem crescente: %d %d %d",n3,n2,n1);
            else printf("Os valores na ordem crescente: %d %d %d",n2,n3,n1);
    }
            if(n2>n1 && n2>n3){
            if(n1>n3)
                printf("Os valores na ordem crescente: %d %d %d",n3,n1,n2);
            else printf("Os valores na ordem crescente: %d %d %d",n1,n3,n2);
            }
            if(n3>n2 && n3>n1){
            if(n1>n2)
                printf("Os valores na ordem crescente: %d %d %d",n2,n1,n3);
            else printf("Os valores na ordem crescente: %d %d %d",n1,n2,n3);
            }
}

int main(){
    int n1,n2,n3;

    printf("Digite tres numeros: ");
        scanf("%d %d %d", &n1,&n2,&n3);

            imprime(n1,n2,n3);

}
