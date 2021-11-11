/*
 * Created by karayuu on 2021/11/03.
 */
#include <stdio.h>

int main() {
  int a, b, c;
  int result[10][10][10];

  for (a = 0; a <= 9; a++) {
    for (b = 0; b <= 9; b++) {
      for (c = 0; c <= 9; c++) {
        result[a][b][c] = a + 5 * b - c;
      }
    }
  }
  printf("a = %d, b = %d, c = %d, result = %d", 3, 7, 9, result[3][7][9]);
}