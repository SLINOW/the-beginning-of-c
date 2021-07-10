#include <stdio.h>

/**
 * 与えられた年が閏年であるかどうかを返します.
 *
 * @param year 判断させたい年.
 * @return 0: 閏年ではない / 1: 閏年である
 */
int is_leap_year_at(int year) {
  if (year % 400 == 0) {
    /* 年が400で割り切れたら閏年 */
    return 1;
  } else if (year % 100 == 0) {
    /* 年が100で割り切れたら閏年でない */
    return 0;
  } else if (year % 4 == 0) {
    /* 年が4で割り切れたら閏年 */
    return 1;
  } else {
    return 0;
  }
}

/**
 * 与えられた年月が何日終わりであるかを返します.
 *
 * @param year 計算させたい年.
 * @param month 計算させたい月.
 * @return 指定された年月が何日終わりであるか. (通常28,29,30,31のいずれかである.)
 */
int how_many_days_in(int year, int month) {
  switch (month) {
    case 4:
    case 6:
    case 9:
    case 11:
      return 30;
    case 2:
      if (is_leap_year_at(year) == 0) {
        /* 閏年でない */
        return 28;
      } else {
        /* 閏年である */
        return 29;
      }
    default:
      return 31;
  }
}

/**
 * 1900年1月1日からの経過日数を返します.
 * @param year 計算させたい年.
 * @param month 計算させたい月.
 * @param day 計算させたい日.
 * @return 1900年1月1日からの経過日数. ただし,1900年1月1日は1日目とする.
 */
int year_day(int year, int month, int day) {
  int yday = 0;
  int y, m;
  /* 1990年1月1日から (year - 1)年の経過日数の計算 */
  for (y = 1900; y < year; y++) {
    for (m = 1; m < 12; m++) {
      yday += how_many_days_in(y, m);
    }
  }
  /* year 年1月1日から year 年 month 月の月末までの経過日数を足す */
  for (m = 1; m < month; m++) {
    yday += how_many_days_in(year, m);
  }
  /* 最後に day 日を足す */
  yday += day;
  return yday;
}

int main() {
  int birth_year = 2002;
  int birth_month = 10;
  int birth_day = 3;

  int today_year = 2021;
  int today_month = 7;
  int today_day = 9;

  /* 入力バリデーション. 誕生日が未来だったらエラーメッセージを表示し終了させる. */
  /* 誕生日が未来だったらダメ. */
  if (year_day(today_year, today_month, today_day) < year_day(birth_year, birth_month, birth_day)) {
    printf("誕生日が未来です.");
    return 0;
  }

  int age;
  /* 年齢は現在の年の誕生月日の方が過ぎていたら単に年の差,そうでない場合はそのまま差を取って1を引く. */
  if (year_day(today_year, birth_month, birth_day) < year_day(today_year, today_month, today_day)) {
    /* 誕生月日の方が早い (もうその年の誕生日が過ぎている) */
    age = today_year - birth_year;
  } else {
    age = today_year - birth_year - 1;
  }
  printf("あなたの年齢は%d歳!", age);
}