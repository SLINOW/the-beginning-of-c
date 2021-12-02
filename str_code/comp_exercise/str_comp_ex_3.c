/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  char string[] = "Hello!";
  char find = 'l';
  int i = 0, count = 0;

  while (string[i] != '\0') {
    if (string[i] == find) {
      count++;
    }
    i++;
  }
  printf("「%s」に「%c」は%d文字含まれている。", string, find, count);
}