/*
 * Created by karayuu on 2021/10/16.
 */
#include <stdio.h>

int main() {
  /* x_n = x_{n-1} + x_{n+2} */
  /* prev: (i - 1)番目の数値, pprev: (i - 2)番目の数値 */
  int i, prev = 1, pprev = 0, x;
  for (i = 1; i <= 10; i++) {
    if (i == 1) {
      printf("x1 = 0\n");
    } else if (i == 2) {
      printf("x2 = 1\n");
    } else {
      x = prev + pprev;
      pprev = prev;
      prev = x;
      printf("x%d = %d\n", i, x);
    }
  }
}