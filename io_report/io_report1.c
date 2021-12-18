//
// Created by karayuu on 2021/12/17.
//

#include <stdio.h>

int main() {
  /* どこまで読んだかの判別用 */
  int i = 0;
  char input[100];
  /* 文字数カウント用 */
  int alphabet = 0, number = 0, other = 0;

  /* 文字の読み取り */
  scanf("%s", input);

  /* null終端文字まで読む */
  while (input[i] != '\0') {
    if (('A' <= input[i] && input[i] <= 'Z') || ('a' <= input[i] && input[i] <= 'z')) {
      alphabet++;
    } else if ('0' <= input[i] && input[i] <= '9') {
      number++;
    } else {
      other++;
    }
    i++;
  }

  /* 結果の出力 */
  printf("%s\n", input);
  printf("アルファベット：%d文字\n", alphabet);
  printf("数値：%d文字\n", number);
  printf("その他：%d文字\n", other);
}