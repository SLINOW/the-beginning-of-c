/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int buffer[10];
  int i;

  buffer[0] = 2;
  for (i = 1; i < 10; i++) {
    buffer[i] = buffer[i - 1] * 2;
  }
  for (i = 9; i >= 0; i--) {
    printf("x%d = %d\n", i + 1, buffer[i]);
  }
}