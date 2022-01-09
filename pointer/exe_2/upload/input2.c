#include <stdio.h>

int main() {
  char string[100];
  scanf("%s", string); /* <- string[0]のアドレスを渡している */
  printf("input: %s\n", string);
}