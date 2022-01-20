/*
 * Created by karayuu on 2022/01/14.
 */

#include <stdio.h>
#include <string.h>

/* 構造体 */
struct Student {
  /* メンバ変数 */
  char name[50];
  int num;
  int scoreMath;
  int scoreLang;
  int scoreSci;
  float scoreAve;
};

int main() {
  /* 構造体は新しい型として使えるが,構造体の名前の前に struct がいる */
  struct Student karayuu;
  strcpy(karayuu.name, "karayuu"); /* strcpy で文字列をコピーできる */
  /* メンバ変数には .(ドット) でアクセスできる */
  karayuu.num = 10;
  karayuu.scoreMath = 30;
  karayuu.scoreLang = 20;
  karayuu.scoreSci = 10;
  karayuu.scoreAve = (karayuu.scoreMath + karayuu.scoreLang + karayuu.scoreSci) / 3.0;

  printf("%sの平均点は%f\n", karayuu.name, karayuu.scoreAve);
}