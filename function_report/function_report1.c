#include <stdio.h>

int calc_sequence(int arg1, int arg2, int arg3) {
  int xn = arg2;
  int i;

  /* 引数のバリデーション */
  if (arg1 < 1 || arg2 < 1 || arg3 < 1) {
    printf("Error : 引数が1以上の整数値ではない.\n");
    return -1;
  }

  /* arg1 を足すのは (arg3 - 1)回 */
  for (i = 1; i <= arg3 - 1; i++) {
    xn += arg1;
  }
  return xn;
}

int main() {
  int arg1 = 5, arg2 = 3, arg3= 8;

  /* 関数の引数として与える値を出力 */
  printf("-----------------\n");
  printf("arg1 : %d\n", arg1);
  printf("arg2 : %d\n", arg2);
  printf("arg3 : %d\n", arg3);
  printf("-----------------\n");

  int result = calc_sequence(arg1, arg2, arg3);
  if (result != -1) {
    printf("x%d : %d", arg3, result);
  }
}