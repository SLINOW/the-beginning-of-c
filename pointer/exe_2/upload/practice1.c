#include <stdio.h>

void swap(int* x, int* y) {
  /* 一旦xの値をxのポインタから参照して保持しておく */
  int temp = *x;
  /* xのポインタが指す先の値を,yのポインタが指す先の値で置き換える */
  *x = *y;
  /* yのポインタが指す先の値を,先ほど保存したxの値で置き換える */
  *y = temp;
}

int main() {
  int a = 100, b = 200;
  printf("before: a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("after: a = %d, b = %d\n", a, b);
}