#include <stdio.h>

/*
3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora,
faça um programa, na linguagem que desejar, que calcule e retorne: • O menor
valor de faturamento ocorrido em um dia do mês; • O maior valor de faturamento
ocorrido em um dia do mês; • Número de dias no mês em que o valor de faturamento
diário foi superior à média mensal.

IMPORTANTE:
a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
b) Podem existir dias sem faturamento, como nos finais de semana e feriados.
Estes dias devem ser ignorados no cálculo da média;
*/
#include <stdio.h>

int main(void) {
  int diasValidos = 0, fatSuperior = 0;
  float soma = 0, mediaMensal = 0;
  float menorValor, maiorValor;
  float dia[30] = {22174.1664, 24537.6698, 26139.6134, 0.0,        0.0,
                   26742.6612, 0.0,        42889.2258, 46251.174,  11191.4722,
                   0.0,        0.0,        3847.4823,  373.7838,   2659.7563,
                   48924.2448, 18419.2614, 0.0,        0.0,        35240.1826,
                   43829.1667, 18235.6852, 4355.0662,  13327.1025, 0.0,
                   0.0,        25681.8318, 1718.1221,  13220.495,  8414.61};

  menorValor = dia[0];
  maiorValor = dia[0];
  for (int i = 0; i < 30; i++) {
    if (dia[i] > 0.0) {
      diasValidos++;
      soma = soma + dia[i];
      if (dia[i] < menorValor)
        menorValor = dia[i];
    }
    if (dia[i] > maiorValor)
      maiorValor = dia[i];
  }

  mediaMensal = soma / diasValidos;
  for (int j = 0; j < 30; j++) {
    if (dia[j] > mediaMensal)
      fatSuperior++;
  }
  printf("Menor valor de faturamento no mês: %.4f\n", menorValor);
  printf("Maior valor de faturamento no mês: %.4f\n", maiorValor);
  printf("Média mensal: %.4f\n", mediaMensal);
  printf("Dias com faturamento superior à média mensal: %i dias\n",
         fatSuperior);
  return 0;
}