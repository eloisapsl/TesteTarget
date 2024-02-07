/* 
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

	IMPORTANTE:
	Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código; 
*/
#include <stdio.h>

int main(void) {
	
  	int numero;
	int a = 0, b = 1, temp;

	printf("Digite um número:\n");
	scanf("%i", &numero);
	
	while(b < numero)
	{
		temp = b;
		b += a;
		a = temp;
	}
	if(b == numero){
		printf("O número faz parte da sequência.\n");
	}
	else{
		printf("O número não faz parte da sequência.\n");
	}
	return 0;
  }

