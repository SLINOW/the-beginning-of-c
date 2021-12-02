/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  char string[] = "hello!";
  int i = 0;

  while (string[i] != '\0') {
    printf("%c", string[i]);
    i++;
  }
  printf("\n");
}