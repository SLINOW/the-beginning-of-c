/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  char string[] = "hello!";
  int i = 0;

  while (string[i] != '\0') {
    i++;
  }
  printf("文字列：%s\n", string);
  printf("文字数：%d\n", i);
}

