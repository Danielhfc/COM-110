#include<stdio.h>

void tempo(int hora,int minuto,int segundo, int *conversao){

*conversao = 3600*hora + 60*minuto + segundo;

}

int main(){

    int hora, minuto, segundo,conversao;

    printf("Digite o horario (hora,minuto,segundo) ");
    scanf("%d %d %d", &hora, &minuto, &segundo);

    tempo(hora,minuto,segundo,&conversao);

    printf("Total de segundos: %d",conversao);
}
