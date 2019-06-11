#include<stdio.h>
int i;
void soma(int vetorA[30],int vetorB[30]){
for(i=0;i<30;i++)
    vetorB[i] = vetorA[i]+vetorB[i];
}

int main(){

int a[30],b[30];

for(i=0;i<30;i++){
    printf("Digite um valor para o vetor A: ");
        scanf("%d",&a[i]);
        }

for(i=0;i<30;i++){
    printf("Digite um valor para o vetor B: ");
        scanf("%d",&b[i]);
        }
soma(a,b);
for(i=0;i<30;i++)
    printf("%d\n",b[i]);

}
