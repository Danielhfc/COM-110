#include<stdio.h>
int main(){
int gabarito[10],cartao,resposta[10],i,n,j,k,cont;
    printf("Quantos apostaram? ");
    scanf("%d",&n);
    printf("Qual o gabarito da loteria? ");
    for(i=0;i<10;i++)
        scanf("%d",&gabarito[i]);

        for(i=0;i<n;i++){
                cont=0;
                printf("Qual o numero de identificacao do apostador? ");
                scanf("%d",&cartao);
                printf("Quais numeros foram apostados? ");
            for(j=0;j<10;j++){
                scanf("%d",&resposta[j]);
                for(k=0;k<10;k++)
                    if(resposta[j]==gabarito[k])
                    cont++;
            }
printf("O candidato de numero %d teve %d acertos\n",cartao,cont);
if(cont==10)
    printf("Vencedor!\n");
        }


}
