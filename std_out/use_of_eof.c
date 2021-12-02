/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  int num;

  /* ターミナルでは Ctrl + D, macでは Command + D でEOFと同じ意味 */
  while (scanf("%d", &num) != EOF) {
    printf("入力：%d\n", num);
  }
}