/*
 * Created by karayuu on 2021/10/01.
 */
#include <stdio.h>

int main() {
  int i, j;
  for (i = 1; i <= 138; i++) {
    if (138 % i == 0) {
      printf("%d ", i);
    }
  }
  printf("\n");
}