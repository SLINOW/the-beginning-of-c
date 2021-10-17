/*
 * Created by karayuu on 2021/10/16.
 */
#include <stdio.h>

int main() {
  /* メインは10 * 10の'*'の正方形, i行目のi番目と(10 - i + 1)番目だけ欠けている */
  int row, col;
  for (row = 1; row <= 10; row++) {
    for (col = 1; col <= 10; col++) {
      if (col == row || col == (10 - row + 1)) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
}