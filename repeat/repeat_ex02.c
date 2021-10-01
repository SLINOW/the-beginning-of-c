/*
 * Created by karayuu on 2021/09/30.
 */
#include <stdio.h>

int main() {
  int i;
  int n = 3;

  for (i = 1; i <= 8; i++) {
    printf("x%d = %d\n", i, n);
    n *= 2;
  }
}