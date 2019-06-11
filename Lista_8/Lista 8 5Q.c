#include<stdio.h>

int main(){

    int i,j,*p,*q;
i=6;
j=3;
p = &i;
q = &j;
        //*q = &j;
        p = &*&i;
        //i = (*&)j;
        i = *&j;
        i = *&*&j;
        //q = *p;
        i = (*p)++ + *q; // = 9
printf("%d",q);

}

