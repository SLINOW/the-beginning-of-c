/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  char ch = 'a';

  if ('a' <= ch && ch <= 'z') {
    printf("%c -> %c\n", ch, ch + ('A' - 'a'));
  } else if ('A' <= ch && ch <= 'Z') {
    printf("%c -> %c\n", ch, ch + ('a' - 'A'));
  } else {
    printf("%c -> %c\n", ch, ch);
  }
}
