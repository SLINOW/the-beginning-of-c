/*
 * Created by karayuu on 2021/11/03.
 */
#include <stdio.h>

int main() {
  /* 成績データ: class 組 index 番の点数を score[class][index] とする */
  int score[5][10] = {
    {83, 0, 68, 39, 84, 26, 4, 18, 18, 89},
    {72, 17, 17, 6, 5, 28, 24, 94, 8, 98},
    {45, 63, 44, 78, 72, 38, 31, 80, 7, 78},
    {56, 57, 44, 23, 96, 95, 16, 66, 12, 0},
    {54, 50, 85, 72, 56, 90, 66, 47, 49, 100}
  };

  /* 合計点 */
  int sum = 0, class_sum = 0;
  /* 平均点 */
  float average;
  /* 各組の平均点 */
  float class_average[5];
  /* 最高点と所属する組と番号 */
  int max_score = -1, max_class, max_index;
  /* ループ用 */
  int class, index;

  /* 各値の計算 */
  for (class = 0; class < 5; class++) {
    for (index = 0; index < 10; index++) {
      sum += score[class][index];
      class_sum += score[class][index];
      if (max_score < score[class][index]) {
        max_score = score[class][index];
        max_class = class;
        max_index = index;
      }
    }
    class_average[class] = class_sum / 10.0;
    class_sum = 0;
  }
  /* 平均点の計算 */
  average = sum / 50.0;

  /* 出力 */
  printf("--- 全受験者の平均点 ---\n");
  printf("%f点\n", average);
  printf("\n");
  printf("--- 各組の平均点 ---\n");
  for (class = 0; class < 5; class++) {
    printf("%d組：%f点\n", class + 1, class_average[class]);
  }
  printf("\n");
  printf("--- 最高得点 ---\n");
  printf("点数：%d点\n", max_score);
  printf("番号：%d\n", (max_class + 1) * 10 + max_index);
  printf("所属：%d\n", max_class);
}