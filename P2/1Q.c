/* Fa�a uma fun��o que receba tr�s par�metros que recebam a hora, o minuto e o segundo local. A fum��o deve converter a quantidade de horas e
minutos em segundos e alterar o valor do par�metro correspondente aos segundos de maneira que o mesmo seja o total de segundos referente aos
valores passados, por exemplo.
Se a fun��o recebe 2
#include<stdio.h>
void segundos(int *seg,int min,int hora){
    *seg=*seg+min*60+hora*3600;
}
