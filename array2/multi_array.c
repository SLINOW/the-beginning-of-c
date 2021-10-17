/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int array0[5][5];
  int array1[10][10][10];

  /* 多次元配列において,要素数を空にできるのは1つ目のみ */
  int array2[][2] = {{1, 2}, {3, 4}};
  int array3[][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

  int i, j, k;
  for (i = 0; i < 2; i++) {
    for (j = 0; j <2; j++) {
      printf("array2[%d][%d] is %d\n", i, j, array2[i][j]);
    }
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j <2; j++) {
      for (k = 0; k < 2; k++) {
        printf("array3[%d][%d][%d] is %d\n", i, j, k, array3[i][j][k]);
      }
    }
  }
}
