#include <stdio.h>

int main() {
  int x;
  int* p; /* <- int *p と同じ意味 */

  p = &x; /* xのアドレスをポインタ変数pに代入 */
  *p = 12; /* ポインタの指す変数の値を書き換える */

  printf("%d\n", x);
}