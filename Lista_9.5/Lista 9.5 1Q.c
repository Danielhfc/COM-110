 #include<stdio.h>
int main(){
int i;
char cadeia[2][51];

for(i=0;i<2;i++){
    printf("Digite um nome: ");
    scanf(" %[^\n]",cadeia[i]);
}
for(i=0;i<2;i++){
      printf("%s\n",cadeia[i]);
}
}
