/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */
/* Hugo Ralf Pereira RA:155742*/
#include <stdio.h>

int main() {
  /*declaracao de variaveis auxiliares e para recebimento do caractere*/
  char c, aux = '\0', aux2 = '\0';
  /*declaracao de variavel para o contador*/
  int counter = 0;
/*laco para verificacao e contagem de palavras*/
  do{
    scanf("%c", &c);    
	if((c == '.' || c == ' ' || c == '\n' || c == ',' || c == '!' || c == '-') 
		&& (aux == '.' || aux == ' ' || aux == ',' || aux == '!' || aux == '-')){}
	else if((c == '.' || c == ',') && aux >= '0' && aux <= '9'){}
	else if (c == ' ' || c == '\n' || c == ',' || c == '.' || c == '-' || c == '!' 
		|| (c >= '0' && c  <= '9' && aux == '.' && aux2 >= '0' && aux2 <= '9'))
		counter ++;
	aux2 = aux;
    aux = c;
  }while(c != '\n');

	/*impressao do contador de palavras*/
  printf("%d\n", counter);
  return 0;
}
