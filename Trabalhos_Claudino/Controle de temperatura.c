#include<stdio.h>
void menor(float temp){
float tempNovo,gasto;
    if(temp<10){
        tempNovo=10-temp;
        printf("A temperatura aumentara %.2f graus",tempNovo);
        printf("\nTemperatura ajustada: %.2f",temp+tempNovo);
        gasto=60*tempNovo;
        printf("\nO gasto acrescido sera de: %.2f\n\n",gasto);
    }
    else{
        tempNovo=temp-15;
        printf("A temperatura diminuira %.2f",tempNovo);
        printf("\nTemperatura ajustada: %.2f",temp-tempNovo);
        gasto=30*tempNovo;
        printf("\nO gasto diminuido sera de: %.2f\n\n",gasto);

    }
}

void medio(float temp){
float tempNovo,gasto;
    if(temp<15){
        tempNovo=15-temp;
        printf("A temperatura aumentara %.2f graus",tempNovo);
        printf("\nTemperatura ajustada: %.2f",temp+tempNovo);
        gasto=90*tempNovo;
        printf("\nO gasto acrescido sera de: %.2f\n\n",gasto);
    }
    else{
        tempNovo=temp-20;
        printf("A temperatura diminuira %.2f",tempNovo);
        printf("\nTemperatura ajustada: %.2f",temp-tempNovo);
        gasto=45*tempNovo;
        printf("\nO gasto diminuido sera de: %.2f\n\n",gasto);

    }
}

void maior(float temp){
float tempNovo,gasto;
    if(temp<20){
        tempNovo=20-temp;
        printf("A temperatura aumentara %.2f graus",tempNovo);
        printf("\nTemperatura ajustada: %.2f",temp+tempNovo);
        gasto=180*tempNovo;
        printf("\nO gasto acrescido sera de: %.2f\n\n",gasto);
    }
    else{
        tempNovo=temp-25;
        printf("A temperatura diminuira %.2f",tempNovo);
        printf("\nTemperatura ajustada: %.2f",temp-tempNovo);
        gasto=60*tempNovo;
        printf("\nO gasto diminuido sera de: %.2f\n\n",gasto);

    }
}


int main(){
    float temp1,temp2,temp3;

    for(int i=0;i<24;i++){
        printf("Digite as temperaturas do ambiente: ");
        scanf("%f %f %f",&temp1,&temp2,&temp3);
        if(temp1<10 || temp1>15){
            menor(temp1);
        }
        if(temp2<15 || temp2>20){
            medio(temp2);
    }
     if(temp2<15 || temp2>20){
            maior(temp3);
    }


}
}
