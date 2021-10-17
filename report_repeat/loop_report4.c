/*
 * Created by karayuu on 2021/10/16.
 */
#include <stdio.h>

int main() {
  /* ユークリッドの互除法を用いる. aとbの最小公約数は,a/bとa%bの最小公約数に等しい. a%b == 0で終了させる.答えはb. */
  int a = 368, b = 256;
  while (a % b != 0) {
    int remainder = a % b;
    a = b;
    b = remainder;
  }
  printf("%d\n", b);
}
