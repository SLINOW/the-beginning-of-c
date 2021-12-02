/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  /* \0 はヌル文字で末尾に置く必要がある */
  char string[] = {'h', 'e', 'l', 'l', 'o', '!', '\0'};
  int i;

  for (i = 0; i < 7; i++) {
    printf("%c", string[i]);
  }
  printf("\n");
}