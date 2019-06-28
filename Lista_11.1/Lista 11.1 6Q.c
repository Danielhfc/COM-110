#include<stdio.h>
void capitalPop(int vet[][10]){
int maior,linha,i;
maior=vet[0][0];
linha=0;
for(i=0;i<23;i++)
if(vet[i][0]>maior){
    maior=vet[i][0];
    linha=i;
}
printf("Linha: %d\n\n",linha+1);
}

void mediaPop(int vet[][10]){
float cont=0,media=0;
int i;
for(i=0;i<23;i++){
media=media+vet[i][0];
cont++;
}
printf("Media da pop das capitais: %f\n",media/cont);
}

void cidadePop(int vet[][10]){
int i,k,maior;
for(i=0;i<23;i++){
    maior=vet[i][0];
        for(k=1;k<10;k++)
            if(vet[i][k]>maior)
                printf("Linha %d e coluna %d\n",i+1,k+1);
}
}

int main(){
int i,k,vet[23][10];

for(i=0;i<23;i++){
    printf("Digite a populacao da capital: ");
    scanf("%d",&vet[i][0]);
for(k=1;k<10;k++){
    printf("Digite a populacao de cada municipio: ");
    scanf("%d",&vet[i][k]);
        }
}
capitalPop(vet);
mediaPop(vet);
cidadePop(vet);
}




