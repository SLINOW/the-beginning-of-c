/*
 * Created by karayuu on 2021/10/16.
 */
#include <stdio.h>

int main() {
  /* x_n = x_{n-1} * 4 - 8 <=> x_{n-1} = (x_n + 8) / 4 */
  int i, x = 87384;
  /* i > 5 と指定しないと, x4(i = 4) を出力してしまう */
  for (i = 10; i > 5; i--) {
    x = (x + 8) / 4;
  }
  printf("x5 = %d\n", x);
}