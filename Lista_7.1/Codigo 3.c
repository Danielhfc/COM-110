//C�digo 3
#include<stdio.h>
#include<stdlib.h>
int x;
int param( ){
x = x + 10;
return x;
}
int main(){
int y;
printf("Digite um numero: ");
scanf(" %d", &x);
y = param();
printf("\nO valor de y e %d \n", y);
printf("\nO valor de x e %d \n", x);
system("pause");
}
