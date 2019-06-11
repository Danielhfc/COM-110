#include<stdio.h>
#include<math.h>

float volume(float r){

   return (4/3)*M_PI*(r*r*r);

}

int main(){

float r;

printf("Digite o valor do raio: ");
 scanf("%f", &r);
printf("O volume da circunferencia e: %f",volume(r));



}
