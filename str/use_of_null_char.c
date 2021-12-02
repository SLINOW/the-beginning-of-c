/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  char string[] = {'h', 'e', 'l', 'l', 'o', '!', '\0'};
  int i = 0;

  while (string[i] != '\0') {
    printf("%c", string[i]);
    i++;
  }
  printf("\n");
}