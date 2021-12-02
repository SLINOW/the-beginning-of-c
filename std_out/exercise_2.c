/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  char string[100];

  while (scanf("%s", string) != EOF) {
    printf("入力：%s\n", string);
  }
  printf("入力終了\n");
}
