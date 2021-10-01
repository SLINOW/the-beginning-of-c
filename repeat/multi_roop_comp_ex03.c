/*
 * Created by karayuu on 2021/10/01.
 */
#include <stdio.h>

int main() {
  int i, j;
  for (i = 1; i <= 10; i++) {
    for (j = 1; j <= 10; j++) {
      if (i % 2) {
        if (j % 2) {
          printf("*");
        } else {
          printf(" ");
        }
      } else {
        if (j % 2) {
          printf(" ");
        } else {
          printf("*");
        }
      }
    }
    printf("\n");
  }
}