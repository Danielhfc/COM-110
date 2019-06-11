#include<stdio.h>
int i;
void mesmo(char a[10],char b[10]){
for(i=0;i<10;i++)
    for(int j=0;j<10;j++)
        if(a[i]==b[j])
            printf("\n%c",a[i]);
}

int main(){
char a[10],b[10];

for(i=0;i<10;i++){
    printf("Digite o caracter do vetor A: ");
        scanf(" %c",&a[i]);
}

for(i=0;i<10;i++){
    printf("Digite o caracter do vetor B: ");
        scanf(" %c",&b[i]);
}
mesmo(a,b);

}
