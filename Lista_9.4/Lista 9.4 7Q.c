#include<stdio.h>
int main(){
int j,vogal[5]={0,0,0,0,0};
char linha[41];

printf("Digite uma linha de texto: ");
scanf("%[^\n]",linha);

for(j=0;linha[j]!='\0';j++){
    if(linha[j]=='a' || linha[j]=='A')
        vogal[0]++;
    else if(linha[j]=='e' || linha[j]=='E')
        vogal[1]++;
    else if(linha[j]=='i' || linha[j]=='I')
        vogal[2]++;
    else if(linha[j]=='o' || linha[j]=='O')
        vogal[3]++;
    else if(linha[j]=='u' || linha[j]=='U')
        vogal[4]++;
}
printf("A vogal a aparece %d vezes\n",vogal[0]);
printf("A vogal e aparece %d vezes\n",vogal[1]);
printf("A vogal i aparece %d vezes\n",vogal[2]);
printf("A vogal o aparece %d vezes\n",vogal[3]);
printf("A vogal u aparece %d vezes\n",vogal[4]);
}
