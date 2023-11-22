#include <stdio.h>

int main() {
  int numeros[10];

  printf("Digite 10 numeros inteiros::\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &numeros[i]);
  }

  printf("Numeros primos e suas posicoes no vetor:\n");
  for (int i = 0; i < 10; i++) {
    int numero = numeros[i];
    if (numero <= 1) {
      continue;
    }

    int primo = 1;
    for (int j = 2; j * j <= numero; j++) {
      if (numero % j == 0) {
        primo = 0;
        break;
      }
    }

    if (primo) {
      printf("Numero primo: %d (Posicao %d)\n", numero, i);
    }
  }
  return 0;
}