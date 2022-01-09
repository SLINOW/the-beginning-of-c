#include <stdio.h>
#include <stdlib.h>

int main() {
  int* null_p = NULL;
  printf("null_p = %p\n", null_p); /* => 16進数で0を表す 0x0 が出力される */
}