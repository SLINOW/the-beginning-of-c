/*
 * Created by karayuu on 2021/12/31.
 */
#include <stdio.h>

int main() {
  int a;
  /* 変数の大きさを見てみる */
  printf("int: %d\n", sizeof(int)); /* 型を書いても良い */
  printf("int: %d\n", sizeof(a)); /* 変数を書いても良い */

  /* アドレス */
  int b = 100;
  printf("bの値は,%dです\n", b);
  printf("bのアドレスは,%pです\n", &b); /* アドレスを表示したいときは %p を使う */

  /* ポインタ変数 */
  int *pb = &b; /* int型のポインタ変数に bのアドレスを代入している */
  printf("bのアドレスは,%pです\n", pb);
  printf("bのアドレスの指している先の変数の値:%d\n", *pb); /* アドレスが指している変数の値を取ってくるときは *(関節演算子) を使う */
}