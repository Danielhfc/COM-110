//Faça um programa que carregue um vetor com o nome de sete alunos. Carregue um outro vetod com a media final desses alunos. Calcule e mostre:
//O nome do aluno com maior média
//Para cada aluno que ainda está aprovado, isto é, com média menor que 7.0, mostrar quanto esse aluno precisa tirar no exame para ser aprovado.
//Considerar que a media para aprovação no exae é 5.0 .

#include<stdio.h>

int main(){

int i;
float media[7],maior;
char alunos[7];

    printf("Digite o nome e a media do aluno: ");
        scanf(" %c %f",&alunos[0],&media[0]);
    maior = media[0];
    for(i=1;i<7;i++){
        printf("Digite o nome e a media do aluno: ");
        scanf(" %c %f",&alunos[i],&media[i]);
        if(media[i]>maior)
            maior = media[i];
    }
    for(i=0;i<7;i++){
        if(media[i]==maior)
            printf("O aluno com a maior media e: %c\n",alunos[i]);
        if(media[i]<5)
            printf("O aluno %c precisa de %.2f pontos para passar\n",alunos[i],5-media[i]);
    }
}
