/*
 * Created by karayuu on 2021/09/30.
 */
#include <stdio.h>

int main() {
  int i;
  int x = 2;
  int sum = 0;

  for (i = 1; i <= 10; i++) {
    printf("x%d = %d\n", i, x);
    sum += x;
    x *= 2;
  }
  printf("sum = %d\n", sum);
}