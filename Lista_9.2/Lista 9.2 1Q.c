#include<stdio.h>
int i;
void zero(int a[5]){
for(i=0;i<5;i++)
    if(a[i]<0)
        a[i]=0;

}

int main(){

int a[5];

for(i=0;i<5;i++){
    printf("Digite um valor: ");
        scanf("%d",&a[i]);
        }

vetor(a);
for(i=0;i<5;i++)
    printf("%d\n",a[i]);

}
