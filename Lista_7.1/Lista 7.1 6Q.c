#include<stdio.h>
float peso(float alt,char sexo){

    if(sexo=='M')
        return (72.7*alt)-58;
    else
        return (62.1*alt)-44.7;
}

int main(){

    float alt;
    char sexo;

    printf("Qual o sexo da pessoa? 'M' para homem e 'F' para mulher ");
        scanf(" %c", &sexo);
    printf("Qual a altura da pessoa? ");
        scanf("%f", &alt);

    while(alt>0){
        printf("O peso ideal e: %f\n",peso(alt,sexo));
            printf("Qual o sexo da pessoa? 'M' para homem e 'F' para mulher ");
                scanf(" %c", &sexo);
            printf("Qual a altura da pessoa? ");
                scanf("%f", &alt);

    }

}
