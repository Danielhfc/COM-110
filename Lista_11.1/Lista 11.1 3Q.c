#include<stdio.h>
float soma(){
float i,j=37,res=0;
for(i=1;i<=37;i++){
res=res+(j*(j+1))/i;
j=j-1;
}
return res;
}

int main(){
float res;
res=soma();
printf("%f",res);
}
