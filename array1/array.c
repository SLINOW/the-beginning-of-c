/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int score_1 = 50, score_2 = 70, score_3 = 40, score_4 = 90, score_5 = 100;

  printf("score_1 = %d\n", score_1);
  printf("score_2 = %d\n", score_2);
  printf("score_3 = %d\n", score_3);
  printf("score_4 = %d\n", score_4);
  printf("score_5 = %d\n", score_5);

  /* 配列を使って記述する */
  int score[5] = {50, 70, 40, 90, 100};
  /* このように,要素数は省略可能 */
  int _score[] = {50, 70, 40, 90, 100};
  int i;

  for (i = 0; i < 5; i++) {
    printf("score_%d = %d\n", i + 1, score[i]);
  }
}