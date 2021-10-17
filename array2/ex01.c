/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int array[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      printf("array[%d][%d] = %d\n", i, j, array[i][j]);
    }
  }
}