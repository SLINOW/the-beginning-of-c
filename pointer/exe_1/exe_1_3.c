#include <stdio.h>

int main() {
  int a = 2, b = 3;
  int *pa, *pb;

  pa = &a;
  pb = &b;

  printf("代入する前\n");
  printf("a = %d, b = %d\n", a, b);
  printf("pa = %p, pb = %p\n", pa, pb);
  printf("&a = %p, &b = %p\n", &a, &b);
  printf("*pa = %d, *pb = %d\n", *pa, *pb);

  /* a = b; */
  /* a = b では, aに割り当てられたアドレスに保存されている2という値3に書き換える操作を行わせているため, aの値が変化する. */
  pa = pb;
  /* pa = pb では, paというポインタに,bの変数のアドレスpb (= &b)を代入しているのみで, aの値は変化しない.
   * (もちろん, *paを行えば paはpbに等しく,bのアドレスを指しているので3が出力される)
   */

  printf("代入した後\n");
  printf("a = %d, b = %d\n", a, b);
  printf("pa = %p, pb = %p\n", pa, pb);
  printf("&a = %p, &b = %p\n", &a, &b);
  printf("*pa = %d, *pb = %d\n", *pa, *pb);
}