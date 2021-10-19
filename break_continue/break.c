/*
 * Created by karayuu on 2021/10/19.
 */
#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 10; i++) {
    if (i == 5) {
      /* ループを抜けられる */
      break;
    }
    printf("i = %d\n", i);
  }
}