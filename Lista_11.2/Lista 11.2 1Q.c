#include<stdio.h>
#include<stdlib.h>
/*l� caracter por caracter do arquivo e imprime os caracteres diferentes de espa�o, \n (mudan�a de linha) e \r
(retorno de carro) - somente no windows
*/
int main () {
int i, cont =0;
char ch;
FILE *arq;
arq = fopen("DadosR.dat","r");
if (arq == NULL) { //se n�o foi poss�vel abrir o arquivo, arq ser� NULL
printf("\nArquivo inv�lido");
exit(1); // interrompe o programa
}
ch=fgetc(arq); //fun��o que l� o arquivo apontado por arq, retorna um caracter e posiciona o cursor no pr�ximo caracter
while(ch != EOF){// EOF � o caractere que indica final de arquivo
if (ch != ' ' && ch!='\n' && ch != '\r') {
        cont++;
printf("\n%c - %d", ch, ch);
}
ch=fgetc(arq);
}
printf("\n O arquivo tem %d caracteres \n", cont);
}
