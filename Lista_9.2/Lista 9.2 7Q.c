#include<stdio.h>
int i;
void zero(int a[50],int n){
for(i=0;i<n;i++)
    if(a[i]<0)
        a[i]=0;

}

int main(){

int a[50],n;

printf("Quantos numeros serao lidos? ");
    scanf("%d",&n);

for(i=0;i<n;i++){
    printf("Digite um valor: ");
        scanf("%d",&a[i]);
        }
zero(a,n);
for(i=0;i<n;i++)
    printf("%d\n",a[i]);

}
