#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p; /* なんか指してるけど,よくわからないアドレスを指しているポインタ */
  printf("どこを指してるか分からないポインタ変数: %p\n", p);
  printf("*p = %d\n", *p);
  int a = 4;
  p = malloc(sizeof(int)); /* mallocで動的にintのサイズ分メモリを確保して,その確保したメモリの(先頭の)アドレスを指している状態になった */
  printf("確保したメモリを指しているポインタ変数: %p\n", p);
  *p = a; /* その確保したメモリに値を書き込む */
  free(p); /* 確保したメモリを解放 */
  printf("解放したメモリを指しているポインタ変数: %p\n", p); /* Segmentation Fault はでてない */
  p = NULL;
  printf("どこも指していない状態のポインタ変数: %p\n", p);
}

