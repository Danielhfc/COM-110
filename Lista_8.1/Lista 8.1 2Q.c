#include<stdio.h>

void limite(int a,int b,int c, int *min, int *max){
if (a>b && a>c) {
    *max=1;
    if (b>c)
        *min=3;
        else
            *min=2;
}
if (b>a && b>c) {
    *max=2;
    if (a>c)
        *min=3;
        else
            *min=1;
}
if (c>b && c>a) {
    *max=3;
    if (a>b)
        *min=2;
        else
            *min=1;
}
    }


int main(){

int a,b,c, min, max;

    printf("Digite tres numeros (a,b,c): ");
        scanf("%d %d %d",&a,&b,&c);
limite(a,b,c,&min,&max);
    printf("A posicao do menor numero e: %d\n", min);
    printf("A posicao do maior numero e: %d\n", max);


}
