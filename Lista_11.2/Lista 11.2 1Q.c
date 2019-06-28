#include<stdio.h>
#include<stdlib.h>
/*lê caracter por caracter do arquivo e imprime os caracteres diferentes de espaço, \n (mudança de linha) e \r
(retorno de carro) - somente no windows
*/
int main () {
int i, cont =0;
char ch;
FILE *arq;
arq = fopen("DadosR.dat","r");
if (arq == NULL) { //se não foi possível abrir o arquivo, arq será NULL
printf("\nArquivo inválido");
exit(1); // interrompe o programa
}
ch=fgetc(arq); //função que lê o arquivo apontado por arq, retorna um caracter e posiciona o cursor no próximo caracter
while(ch != EOF){// EOF é o caractere que indica final de arquivo
if (ch != ' ' && ch!='\n' && ch != '\r') {
        cont++;
printf("\n%c - %d", ch, ch);
}
ch=fgetc(arq);
}
printf("\n O arquivo tem %d caracteres \n", cont);
}
