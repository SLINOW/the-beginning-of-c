/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int score_a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int score_b[30];

  printf("科目A\n1人目：%d点\n", score_a[0]);

  score_b[0] = 10;
  score_b[10] = 20;
  score_b[20] = 30;

  /* (1) */
  printf("3人目：%d点\n", score_a[2]);
  /* (2) */
  printf("7人目:%d点\n", score_a[6]);
  /* (3) */
  printf("10人目:%d点\n", score_a[9]);
}