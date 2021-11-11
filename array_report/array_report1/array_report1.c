/*
 * Created by karayuu on 2021/11/03.
 */
#include <stdio.h>

int main() {
  float array[7];
  int i;

  /* x1 の初期化 */
  array[0] = 300;
  /* x2 〜 x7 の計算 */
  for (i = 1; i <= 6; i++) {
    array[i] = array[i - 1] / 2;
  }

  /* x7 〜 x3 の出力 */
  for (i = 6; i >= 2; i--) {
    printf("x%d = %f\n", i + 1, array[i]);
  }
}