/* Faça uma função que receba três parâmetros que recebam a hora, o minuto e o segundo local. A fumção deve converter a quantidade de horas e
minutos em segundos e alterar o valor do parâmetro correspondente aos segundos de maneira que o mesmo seja o total de segundos referente aos
valores passados, por exemplo.
Se a função recebe 2
#include<stdio.h>
void segundos(int *seg,int min,int hora){
    *seg=*seg+min*60+hora*3600;
}
