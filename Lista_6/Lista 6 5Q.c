#include<stdio.h>
#include<math.h>


int main(){


  float x1,x2,y1,y2,dis;

  printf("Escreva dois pontos do plano P:\n");
  scanf("%f %f",&x1,&y1);
  printf("Escreva dois pontos do plano Q:\n");
  scanf("%f %f",&x2,&y2);


  dis= sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));

  printf("A distancia entre os pontos e: %f",dis);


}
