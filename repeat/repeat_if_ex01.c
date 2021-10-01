/*
 * Created by karayuu on 2021/10/01.
 */
#include <stdio.h>

int main() {
  int x = 4;
  int i;
  for (i = 1; i <= 10; i++) {
    if (x % 3 == 0) {
      printf("x%d = %d\n", i, x);
    }
    x = x * 4 + 2;
  }
}