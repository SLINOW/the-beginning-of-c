/*
 * Created by karayuu on 2021/09/30.
 */
#include <stdio.h>

int main() {
  int i = 1;
  int x = 5;

  while (x < 20000) {
    printf("x%d = %d\n", i, x);
    x *= 2;
    i++;
  }
}
