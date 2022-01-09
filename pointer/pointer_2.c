/*
 * Created by karayuu on 2022/01/02.
 */
#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) {
  return a + b;
}

int doubleF(int x /* 引数はint型の変数 */) {
  x = x * 2;
  return x;
}

int _doubleF(int* x /* 引数はポインタ */) {
  *x = 2 * *x;
  return *x;
}

int main() {
  int i = 3, j = 4;
  int y = plus(i, j); /* => 値渡しの例 */
  printf("i + j = %d\n", y);
  int z = doubleF(i);
  printf("i = %d\n", i); /* <- iの値はそのまま */
  printf("z = %d\n", z);
  int _z = _doubleF(&i); /* => ポインタ渡し (参照渡し) の例 */
  printf("i = %d\n", i); /* <- iの値が置き換わっている!! */
  printf("_z = %d\n", _z);

  int *p; /* なんか指してるけど,よくわからないアドレスを指しているポインタ */
  printf("address of p: %p\n", p);
  printf("*p = %d\n", *p);
  int a = 4;
  p = malloc(sizeof(int)); /* mallocで動的にintのサイズ分メモリを確保して,その確保したメモリの(先頭の)アドレスを指している状態になった */
  printf("address of p: %p\n", p);
  *p = a; /* その確保したメモリに値を書き込む */
  printf("*p = %d\n", *p);
  free(p); /* 確保したメモリを解放 */

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