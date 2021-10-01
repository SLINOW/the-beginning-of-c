/*
 * Created by karayuu on 2021/09/30.
 */
#include <stdio.h>

int main() {
  int i;
  int x = 4;
  int sum = 0;

  for (i = 1; i <= 12; i++) {
    if (7 <= i && i <= 12) {
      printf("x%d = %d\n", i, x);
      sum += x;
    }
    x = x * 3 - 1;
  }
  printf("sum = %d\n", sum);
}