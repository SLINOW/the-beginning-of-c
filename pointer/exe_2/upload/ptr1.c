#include <stdio.h>

int plus(int* pa, int* pb) {
  return *pa + *pb;
}

int main() {
  int i = 3, j = 4;
  int y = plus(&i, &j); /* => 参照渡しの例 */
  printf("i + j = %d\n", y);
}