/*
 * Created by karayuu on 2021/11/03.
 */
#include <stdio.h>

int main() {
  /* 成績データ */
  int score[] = {10, 40, 90, 70, 50, 80, 20, 90, 60, 50, 70, 60, 0};
/* 条件に合致する受験者番号. 大きさは十分大きくしておく. */
  int candidate_number[100];
/* index は candidate_number のどの位置に値を入れるかを保存しておく変数 */
  int i, index = 0;

  for (i = 0; i < 13; i++) {
    /* 60点未満の生徒の番号を出力する (indexが1ずれていることに注意する) */
    if (score[i] < 60) {
      candidate_number[index] = i + 1;
      index++;
    }
  }

/* 最後の探索で, index は1足された状態(最後の要素の次)なので,個数は (index - 1)個になることに注意 */
  for (i = 0; i < index - 1; i++) {
    printf("%d ", candidate_number[i]);
  }
  printf("\n");
}
