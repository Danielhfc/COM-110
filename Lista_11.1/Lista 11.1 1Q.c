#include<stdio.h>
#include<string.h>
//Letra A
typedef struct participante{
char clube[13],proced[50];
int idade;
}tParticipante;
//Letra C
void preencher(tParticipante *p,int n){
int i;
for(i=0;i<n;i++){
    printf("\nDigite o clube de preferencia: ");
    scanf(" %[^\n]",p[i].clube);
    printf("Digite a sua idade: ");
    scanf(" %d",&p[i].idade);
    printf("Digite a sua cidade: ");
    scanf(" %[^\n]",p[i].proced);
}
}
//Letra d
void torcedorClube(tParticipante *p,int n){
int i,a=0,b=0,c=0;
char clube1[]={"Sao Paulo"} , clube2[]={"Corinthias"} , clube3[]={"Flamengo"};
for(i=0;i<n;i++){
    if(strcmp(p[i].clube,clube1)==0)
        a++;
    else if(strcmp(p[i].clube,clube2)==0)
        b++;
    else if(strcmp(p[i].clube,clube3)==0)
        c++;
}
printf("Torcedores do Sao Paulo: %d\n",a);
printf("Torcedores do Corinthias: %d\n",b);
printf("Torcedores do Flamengo: %d\n",c);
}
//Letra E
void idadeMedia(tParticipante *p,int n,char *detClube){
int i,cont=0;
float mediaIdade=0;
for(i=0;i<n;i++)
if(strcmp(p[i].clube,detClube)==0){
    mediaIdade=p[i].idade+mediaIdade;
    cont++;
}
mediaIdade=(float)mediaIdade/cont;
printf("Media da idade dos torcedores do clube %s: %.2f\n",detClube,mediaIdade);
}
//letra F;
void quantidade(tParticipante *p,int n,char *cidade, char *time){
int i,cont=0;
for(i=0;i<n;i++)
    if(strcmp(p[i].clube,time)==0 && strcmp(p[i].proced,cidade)==0)
    cont++;
printf("A quantidade de torcedores do clube %s que nasceram em %s e: %d\n",time,cidade,cont);
}

int main(){
tParticipante p[100];
char detClube[13],cidade[50],time[13];
int n;

printf("Quantas pessoas?");
scanf("%d",&n);
//Letra C
preencher(p,n);
//Letra D
torcedorClube(p,n);
//Letra E
printf("Digite o nome de um clube: ");
scanf(" %[^\n]",detClube);
idadeMedia(p,n,detClube);
//Letra F
printf("Digite o nome da cidade: ");
scanf(" %[^\n]",&cidade);
printf("Digite o nome de um time: ");
scanf(" %[^\n]",&time);
quantidade(p,n,cidade,time);
}
