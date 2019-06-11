#include<stdio.h>
#include<math.h>

int main (){


    float a,b,c,delta,raiz1,raiz2;


    printf("Digite o valor de A, B e C\n");
    scanf("%f %f %f", &a, &b, &c);


    delta = sqrt((pow(b,2)-4*a*c));
    raiz1 = (-b+delta)/2*a;
    raiz2 = (-b-delta)/2*a;

    printf("As raizes da equaçao sao: %f e %f",raiz1,raiz2);





}
