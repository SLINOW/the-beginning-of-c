/*
 * Created by karayuu on 2021/10/01.
 */
#include <stdio.h>

int main() {
  int x = 1;
  int i;
  for (i = 1; i <= 10; i++) {
    if (x % 5 == 0) {
      printf("x%d = %d\n", i, x);
    }
    x = x * 3 - 1;
  }
}