#include<stdio.h>

void funcaoteste(int *p){

    *p = *p*10;
    return;

}

int main(){

    int a=5;

printf("%d\n",a);
funcaoteste(&a);
printf("%d\n",a);



}
