/*
 * Created by karayuu on 2021/09/30.
 */
#include <stdio.h>

int main() {
  int i = 1;
  int x = 10000;

  while (x >= 10) {
    printf("x%d = %d\n", i, x);
    x /= 5;
    i++;
  }
}