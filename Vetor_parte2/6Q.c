#include<stdio.h>
int main(){
int i,votos[5]={0,0,0,0,0},mais;
char vencedor,vetorA[20];
for(i=0;i<20;i++){
    printf("Qual candidato recebeu o voto? ");
        scanf(" %c",&vetorA[i]);
}
for(i=0;i<20;i++)
if(vetorA[i]=='A')
    votos[0]++;
else if(vetorA[i]=='B')
    votos[1]++;
else if(vetorA[i]=='C')
    votos[2]++;
else if(vetorA[i]=='D')
    votos[3]++;
else if(vetorA[i]=='E')
    votos[4]++;
mais=votos[0];
vencedor='A';
for(i=1;i<5;i++)
    if(votos[i]>mais){
        mais=votos[i];
        if(i==1)
        vencedor='B';
        else if(i==2)
        vencedor='C';
        else if(i==3)
        vencedor='D';
        else if(i==4)
        vencedor='E';
    }
printf("O candidato A recebeu %d votos\n",votos[0]);
printf("O candidato B recebeu %d votos\n",votos[1]);
printf("O candidato C recebeu %d votos\n",votos[2]);
printf("O candidato D recebeu %d votos\n",votos[3]);
printf("O candidato E recebeu %d votos\n",votos[4]);
printf("O candidato com mais votos foi: %c",vencedor);
}
