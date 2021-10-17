/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int i, j;
  int x, y;
  int multiTables[9][9];

  x = 5, y = 7;
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      multiTables[i][j] = (i + 1) * (j + 1);
    }
  }

  printf("%d * %d = %d\n", x, y, multiTables[x - 1][y - 1]);
}