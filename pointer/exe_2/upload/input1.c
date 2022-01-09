#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num); /* <- numのアドレスを渡している */
  printf("input: %d\n", num);
}