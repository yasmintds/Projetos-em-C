#include <stdio.h>

int main(void) {
  // Declarando as variaveis
  float num1, num2, num3, media;

  // Entrando de dados
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);

  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  printf("Digite o terceiro numero:");
  scanf("%f", &num3);

  // Calculo da media
  media = (num1 + num2 + num3) / 3;

  // Exibindo o rsultado
  printf("A media dos tres numeros e: %.2f\n", media);
  return 0;
}
