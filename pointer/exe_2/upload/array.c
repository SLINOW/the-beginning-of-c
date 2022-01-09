#include <stdio.h>
#include <stdlib.h>

int main() {
  /* 配列を作ってみよう */
  int *pb;
  int b = 4, k;
  pb = malloc(sizeof(int) * 4); /* <- int型4つ分確保 */
  for (k = 0; k < 4; k++) {
    pb[k] = b * k;
  }
  for (k = 0; k < 4; k++) {
    printf("p[%d] = %d\n", k, pb[k]);
  }
}