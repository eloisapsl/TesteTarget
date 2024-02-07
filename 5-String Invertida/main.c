/*
        5) Escreva um programa que inverta os caracteres de um string.

        IMPORTANTE:
        a) Essa string pode ser informada através de qualquer entrada de sua
   preferência ou pode ser previamente definida no código; b) Evite usar funções
   prontas, como, por exemplo, reverse;
*/

#include <stdio.h>
#include <string.h>
#define tam 500

int main(void) {

  	int rodando = 1;
  	char palavra[tam], palavraInvertida[tam];
	int i = 0, j = 0;
	
  	while (rodando) {
		
    printf("Insira uma palavra: \n");
    scanf("\n%[^\n]", palavra);
    
    for (i = strlen(palavra) - 1; i >= 0; i--) 
	{
      palavraInvertida[j++] = palavra[i];
    }
    palavraInvertida[j] = '\0';
    printf("%s\n", palavraInvertida);
  }
	return 0;
}
