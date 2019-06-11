#include<stdio.h>
#include<string.h>
int main(){
char cadeia[101],inverso[101],i,n,k=0;
printf("Digite uma cadeia de caracter: ");
scanf("%[^\n]",cadeia);
n=strlen(cadeia)-1;
for(i=n;i>=0;i--){
inverso[k]=cadeia[i];
k++;
}
inverso[k]='\0';
if(strcmp(cadeia,inverso)==0)
    return 1;
else
    return 0;
}
