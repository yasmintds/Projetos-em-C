#include <stdio.h>

int main(void) {
  // Declarando as variaveis
  int numeros[5]; // Array de inteiros com 5 elementos
  int soma = 0;   // Variavel recebe a soma dos inteiros
  int i;          // Interador do for

  // Entrada de dados: Preenchendo o array
  printf("Digite os 5 numeros do array: \n");
  for (i = 0; i < 5; i++) {
    printf("numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  // Calculando dos elememtos do Array
  for (i = 0; i < 5; i++) {
    soma += numeros[i];
  }

  // Exibindo o resultado
  printf("A soma dos numeros e: %d\n", soma);

  return 0;
}