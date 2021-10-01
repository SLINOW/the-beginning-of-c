/*
 * Created by karayuu on 2021/10/01.
 */
#include <stdio.h>

int main() {
  int i, j;
  for (i = 1; i <= 9; i++) {
    if (i == 1) {
      printf("  ");
    }
    printf("  %d", i);
  }
  printf("\n");

  for (i = 1; i <= 9; i++) {
    printf(" %d", i);
    for (j = 1; j <= 9; j++) {
      if (i * j >= 10) {
        printf(" %d", i * j);
      } else {
        printf("  %d", i * j);
      }
    }
    printf("\n");
  }
}