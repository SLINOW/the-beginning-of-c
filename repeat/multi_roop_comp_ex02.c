/*
 * Created by karayuu on 2021/10/01.
 */
#include <stdio.h>

int main() {
  int i, j;
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (j < i) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
}