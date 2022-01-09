#include <stdio.h>

int plus(int a, int b) {
  return a + b;
}

int main() {
  int i = 3, j = 4;
  int y = plus(i, j); /* => 値渡しの例 */
  printf("i + j = %d\n", y);
}