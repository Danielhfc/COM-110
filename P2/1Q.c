#include<stdio.h>
void segundos(int *seg,int min,int hora){
    *seg=*seg+min*60+hora*3600;
}
