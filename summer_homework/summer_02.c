/*
 * Created by karayuu on 2021/07/09.
 */
#include <stdio.h>

int main() {
  int i = 14, j = 3;
  char op = '/';

  printf("i = %d\n", i);
  printf("j = %d\n", j);
  printf("op = %c\n", op);

  int ans;
  switch (op) {
    case '+':
      ans = i + j;
      break;
    case '*':
      ans = i * j;
      break;
    case '/':
      ans = i / j;
      break;
  }

  printf("i %c j = %d\n", op, ans);
}