/*
 * Created by karayuu on 2021/10/16.
 */
#include <stdio.h>

int main() {
  /* ライプニッツの公式を用いて円周率を近似する. */
  double pi = 0;
  int i;
  /* 計算量O(n) なら n=10^8 ぐらいまでなら大丈夫 */
  for (i = 0; i <= 100000000; i++) {
    if (i % 2 == 0) {
      pi += 4.0 / (2 * i + 1);
    } else {
      pi -= 4.0 / (2 * i + 1);
    }
  }
  printf("%.8f\n", pi); // => 3.14159266
}
