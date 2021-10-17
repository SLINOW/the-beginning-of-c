/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int score1[] = {60, 70, 40, 90, 100};
  int score2[60];

  /* インデックス0に10を代入 */
  score2[0] = 10;

  printf("score1[2] = %d\n", score1[2]);
  printf("score2[0] = %d\n", score2[0]);
}