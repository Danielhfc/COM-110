#include<stdio.h>
#include<math.h>

int main(){


  int x,pot,i,fat,z,sinal,a,b,div;
  float coss;

  coss=1;
  fat=2;
  sinal=-1;
  i=2;

  printf("Digite um valor ");
  scanf("%d",&x);
    coss = coss+(sinal*((pow(x,i))/fat));
    printf("O cosseno e: %f\n",coss);
  for(i=4;i<=20;i=i+2){

    sinal=sinal*-1;
    fat=fat*i*(i-1);
    coss = coss+(sinal*((pow(x,i))/fat));
    printf("O cosseno e: %f \n",coss);

  }



}
