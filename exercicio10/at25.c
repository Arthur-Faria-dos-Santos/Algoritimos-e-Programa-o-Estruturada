#include <math.h>
#include <stdio.h>

main() {
  int A[100], numero = 1, i = 0;

  while (i < 100) {
    if (numero % 7 != 0 && numero % 10 != 7) {
      A[i] = numero;
      i++;
    }
    numero++;
  }
  
  for (int i = 0; i < 100; i++) {
    printf("%d\n", A[i]);
  }
}