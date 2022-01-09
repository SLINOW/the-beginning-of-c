#include <stdio.h>

int main() {
  char c;
  int *p;
  /* int* (int型のポインタ変数) に char* (char型のアドレス) を入れちゃってる */
  p = &c;

  int c_;
  int *p_;
  /* int (int型変数) に int* (int型のアドレス) を入れちゃってる */
  *p_ = &c_;
}