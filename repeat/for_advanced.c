/*
 * Created by karayuu on 2021/09/30.
 */
#include <stdio.h>

int main() {
  int i;
  int x = 0;

  for (i = 1; i <= 5; i++) {
    printf("x%d = %d\n", i, x);
    x += 2;
  }
}