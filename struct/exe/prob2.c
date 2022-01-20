/*
 * Created by karayuu on 2022/01/14.
 */
#include <stdio.h>
#include <string.h>

/** TOKIO のメンバーの情報を表す構造体 */
struct Member {
  /** 名前(アルファベット) */
  char name[50];
  /** 誕生日(年) */
  int y;
  /** 誕生日(月) */
  int m;
  /** 誕生日(日) */
  int d;
  /** 血液型 */
  char b_type;
  /** 主要演奏楽器 */
  char string[50];
  /** 現メンバーか(現メンバー: 1, 現メンバーでない: 0) */
  int current_member;
};

/** TOKIO を表す構造体 */
struct TOKIO {
  /** 結成年 */
  int year_formation;
  struct Member Joshima;
  struct Member Kokubun;
  struct Member Matsuoka;
  struct Member Kojima;
  struct Member Yamaguchi;
  struct Member Nagase;
};

int main() {
  struct Member Joshima;
  strcpy(Joshima.name, "Joshima Shigeru");
  Joshima.y = 1970;
  Joshima.m = 11;
  Joshima.d = 17;
  Joshima.b_type = 'O';
  strcpy(Joshima.string, "Guitar, Vocal");
  Joshima.current_member = 1;

  struct Member Kokubun;
  strcpy(Kokubun.name, "Kokubun Taichi");
  Kokubun.y = 1974;
  Kokubun.m = 9;
  Kokubun.d = 2;
  Kokubun.b_type = 'O';
  strcpy(Kokubun.string, "Keyboard, Vocal");
  Kokubun.current_member = 1;

  struct Member Matsuoka;
  strcpy(Matsuoka.name, "Matsuoka Masahiro");
  Matsuoka.y = 1977;
  Matsuoka.m = 1;
  Matsuoka.d = 11;
  Matsuoka.b_type = 'A';
  strcpy(Matsuoka.string, "Drums, Vocal");
  Kokubun.current_member = 1;

  struct Member Kojima;
  strcpy(Kojima.name, "Kojima Hiromu");
  Kojima.y = 1976;
  Kojima.m = 10;
  Kojima.d = 24;
  Kojima.b_type = '?';
  strcpy(Kojima.string, "Guitar, Vocal");
  Kojima.current_member = 0;

  struct Member Yamaguchi;
  strcpy(Yamaguchi.name, "Yamaguchi Tatsuya");
  Yamaguchi.y = 1972;
  Yamaguchi.m = 1;
  Yamaguchi.d = 10;
  Yamaguchi.b_type = 'O';
  strcpy(Yamaguchi.string, "Base, Vocal");
  Yamaguchi.current_member = 0;

  struct Member Nagase;
  strcpy(Nagase.name, "Nagase Tomoya");
  Nagase.y = 1978;
  Nagase.m = 11;
  Nagase.d = 7;
  Nagase.b_type = 'O';
  strcpy(Nagase.string, "Guitar, Vocal");
  Nagase.current_member = 0;

  struct TOKIO tokio;
  tokio.year_formation = 1989;
  tokio.Joshima = Joshima;
  tokio.Kokubun = Kokubun;
  tokio.Matsuoka = Matsuoka;
  tokio.Kojima = Kojima;
  tokio.Yamaguchi = Yamaguchi;
  tokio.Nagase = Nagase;
}