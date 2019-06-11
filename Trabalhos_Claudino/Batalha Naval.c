// Daniel Henrique Ferreira Carvalho
// 2019005426
// Hugo Nunes Machado
// 2019005678
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
int i;
float seno1,seno2,ang,g=10,alcance,vel,tempo,ampl,fase,T,defesa,posdef;
    printf("Qual o angulo de fase da defesa? ");
        scanf("%f",&fase);
    printf("Qual o periodo de oscilacao da defesa? (1) para 1 minuto \n (2) para 30 segundos \n (3) para 10 segundos\n ");
        scanf("%d",&T);
            if(T==1)
                T=60;
            else if(T==2)
                T=30;
            else T=10;
            for(i=1;i<=5;i++){
    printf("Qual o angulo do tiro? ");
        scanf("%f", &ang);
    printf("Qual a velocidade do tiro? ");
        scanf("%f", &vel);
  seno1 = sin(2*( ang * M_PI / 180 )); //conversao para angulo
  seno2 = sin( ang * M_PI / 180 );
  ampl = (1.5*tempo)/20; //amplitude da onda de acordo com o
  alcance=ampl+(((vel*vel)*(seno1))/g); // alcance horizontal
  tempo = 2*vel*seno2/g; //tempo de chegada no alvo desde o inicio do tiro
  defesa = sqrt((18/T*200/2)+fase);
  defesa = cos(defesa); // mhs da defesa
  posdef=18*tempo/T;

printf("O alcance do tiro foi de %f metros\n",alcance);

if((alcance-posdef)> 950 && (alcance-posdef)<962)
    printf("Parabens, voce acertou!\n");
      else
    printf("Voce e pessimo!\n");


            }

}
