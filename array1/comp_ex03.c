/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int scores[] = {30, 90, 10, 60, 100, 40, 70, 80, 20, 50};
  int size = 10;
  int max_index, max_score = 0, min_index, min_score = 1000;
  int i;
  for (i = 0; i < size; i++) {
    if (max_score < scores[i]) {
      max_score = scores[i];
      max_index = i;
    }
    if (scores[i] < min_score) {
      min_score = scores[i];
      min_index = i;
    }
  }
  printf("-------------------------\n");
  printf("最高点\n");
  printf("点数：%d点\n番号：%d\n", max_score, max_index + 1);
  printf("-------------------------\n");
  printf("最低点\n");
  printf("点数：%d点\n番号：%d\n", min_score, min_index + 1);
  printf("-------------------------\n");
}
