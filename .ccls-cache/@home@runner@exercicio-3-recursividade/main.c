#include <stdio.h>

int exponencial(int n) {
  if (n == 0)
    return 1;
  if (n > 0)
    return n * exponencial(n - 1);
}

int main() {
  int n;
  scanf("%i", &n);
  printf("%i", exponencial(n));
}