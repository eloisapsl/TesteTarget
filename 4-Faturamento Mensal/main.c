/*
4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

	SP – R$67.836,43
	RJ – R$36.678,66
	MG – R$29.229,88
	ES – R$27.165,48
	Outros – R$19.849,53

	Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
*/

#include <stdio.h>

float calculoPercentual(float total, float estado);

int main(void) {
	float total, SP, RJ, MG, ES, OUTROS;
	SP = 67836.43;
	RJ = 36678.66;
	MG = 29229.88;
	ES = 27165.48;
	OUTROS = 19849.53;
	
	total = SP + RJ + MG + ES + OUTROS;
	printf("------------------------\n");
	printf("TOTAL MENSAL   %.2f\n", total);
	printf("------------------------\n");
	printf(" PERCENTUAL POR ESTADO \n");
	printf("------------------------\n");
 	printf("SP              %.2f%%\n", calculoPercentual(total, SP));
	printf("RJ              %.2f%%\n", calculoPercentual(total, RJ));
	printf("MG              %.2f%%\n", calculoPercentual(total, MG));
	printf("ES              %.2f%%\n", calculoPercentual(total, ES));
	printf("OUTROS          %.2f%%\n", calculoPercentual(total, OUTROS));
	printf("------------------------\n");
 	return 0;
}

float calculoPercentual(float total, float estado)
{
	float percentual;
	percentual = 100 * estado / total;
	return percentual;
}