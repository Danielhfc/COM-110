#include<stdio.h>

int main(){

int a[3]={1,2,3},i;
for(i=0;i<3;i++)
    printf("\n %p %p",a,&a[i]);
}

