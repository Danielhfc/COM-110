#include<stdio.h>
int i;
void soma(int vetorA[10],int vetorB[10],int vetorC[10]){
for(i=0;i<10;i++)
    vetorC[i] = vetorA[i]+vetorB[i];
}

int main(){

int a[10],b[10],c[10];

for(i=0;i<10;i++){
    printf("Digite um valor para o vetor A: ");
        scanf("%d",&a[i]);
        }

for(i=0;i<10;i++){
    printf("Digite um valor para o vetor B: ");
        scanf("%d",&b[i]);
        }
soma(a,b,c);
for(i=0;i<10;i++)
    printf("%d\n",c[i]);

}
