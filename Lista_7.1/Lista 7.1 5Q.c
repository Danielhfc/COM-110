#include<stdio.h>

float media(float nota1,float nota2,float nota3,char letra){

if(letra=='A')
    return (nota1+nota2+nota3)/3;
else
    return ((nota1*5)+(nota2*3)+(nota3*2))/10;
}

int main(){

    float nota1,nota2,nota3;
    char letra;

        printf("Digite as tres notas do aluno: ");
            scanf("%f %f %f", &nota1,&nota2,&nota3);
        printf("Digite 'A' para media aritmetica, ou digite 'P' para media ponderada ");
            scanf(" %c", &letra);
        if((letra!='A') && (letra!='P'))
            printf("Comando invalido");
        else if(letra=='A')
            printf("A media do aluno e : %f",media(nota1,nota2,nota3,letra));
        else if(letra=='P')
            printf("A media do aluno e : %f",media(nota1,nota2,nota3,letra));



}
