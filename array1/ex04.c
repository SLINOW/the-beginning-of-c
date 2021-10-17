/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int score_a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int score_b[30];
  int i;

  printf("科目A\n1人目：%d点\n", score_a[0]);

  score_b[0] = 10;
  score_b[10] = 20;
  score_b[20] = 30;

  printf("3人目：%d点\n", score_a[2]);
  printf("7人目:%d点\n", score_a[6]);
  printf("10人目:%d点\n", score_a[9]);

  /* (1) */
  printf("科目A（全員）\n");
  for (i = 0; i < 10; i++) {
    printf("%d人目：%d点\n", i + 1, score_a[i]);
  }
  /* (2) */
  for (i = 3; i < 30; i++) {
    score_b[i] = 999;
  }
}