#include<stdio.h>

void horario(int mpassado, int *hcorrente, int *mcorrente){
        if(mpassado>=60){
    *hcorrente = mpassado/60;
    *mcorrente = mpassado%60;
        }
        else{
    *hcorrente = 0;
    *mcorrente = mpassado;
        }

}

int main(){

    int tempo, hora, minuto;

    printf("Quantos minutos se passaram desde a meia noite? ");
        scanf("%d",&tempo);
    horario(tempo,&hora,&minuto);

    printf("Sao %d:%d",hora,minuto);

}
