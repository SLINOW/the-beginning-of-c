#include <stdio.h>

int main() {
  int age = 15;
  char msg;

  msg = age >= 20 ? 'y' : 'n';
  printf("%c\n", msg);
}