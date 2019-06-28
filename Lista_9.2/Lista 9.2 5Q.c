#include<stdio.h>
void mesmo(char *a,char *b,char *c){
int i,j,cont=0;
for(i=0;i<10;i++)
    for(j=0;j<10;j++)
        if(a[i]==b[j])
            c[cont++]=a[i];

for(i=0;i<cont;i++)
    printf("%c ",c[i]);
}

int main(){
char a[10],b[10],c[10];
int i;

for(i=0;i<10;i++){
    printf("Digite o caracter do vetor A: ");
        scanf(" %c",&a[i]);
}

for(i=0;i<10;i++){
    printf("Digite o caracter do vetor B: ");
        scanf(" %c",&b[i]);
}
mesmo(a,b,c);

}
