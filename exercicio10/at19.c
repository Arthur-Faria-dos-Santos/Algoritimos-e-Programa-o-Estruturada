#include <math.h>
#include <stdio.h>

int main() {
  int A[50];

  for (int i = 0; i < 50; i++) {
    A[i] = (i + (5 * i)) % (i + 1);
    printf("%d\n", A[i]);
  }
}