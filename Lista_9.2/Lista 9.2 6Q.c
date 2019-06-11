#include<stdio.h>
int i;
void cripto(char a[30]){
for(i=0;i<30;i++)
        if((a[i]=='a') || (a[i]=='i') || (a[i]=='u') || (a[i]=='e') || (a[i]=='o'))
            a[i]= '*' ;
}

int main(){
char a[30];

for(i=0;i<30;i++){
    printf("Digite o caracter do vetor A: ");
        scanf(" %c",&a[i]);
}
cripto(a);

for(i=0;i<30;i++)
    printf("%c ",a[i]);
}
