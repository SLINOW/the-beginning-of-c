/*
 * Created by karayuu on 2021/10/01.
 */
#include <stdio.h>

int main() {
  int i, j;
  for (i = 1; i <= 3; i++) {
    printf("外側の繰り返し %d回目\n", i);

    for (j = 1; j <= 3; j++) {
      printf(" 内側の繰り返し %d回目\n", j);
    }
  }
}