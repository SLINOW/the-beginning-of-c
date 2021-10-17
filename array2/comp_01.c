/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int result[10][10];
  int i, j;
  int a = 5, b = 8;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      result[i][j] = 4 * i + 5 * j - 7;
    }
  }
  printf("a = %d, b = %d, result = %d\n", a, b, result[a][b]);
}