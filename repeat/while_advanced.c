/*
 * Created by karayuu on 2021/09/30.
 */
#include <stdio.h>

int main() {
  int i = 1;
  int x = 2;

  while (x < 1000) {
    printf("x%d = %d\n", i, x);
    x *= 3;
    i++;
  }
}