#include<stdio.h>
int main(){

    int a,*p;
    a = 5;
printf("O valor de a: %d\n",a);
printf("O valor de p: %p\n",p);
printf("O endereco de a e: %p\n",&a);
p = &a;
printf("O valor de a: %d\n",a);
printf("O valor de p: %p\n",p);
printf("O valor que p aponta: %d\n",*p);
printf("O endereço de a e: %p",&a);


}
