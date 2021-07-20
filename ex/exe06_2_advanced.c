#include <stdio.h>

/** 日付を表す構造体 */
typedef struct {
  /** 年 */
  int year;
  /** 月 */
  int month;
  /** 日 */
  int day;
} date_t;

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
 * @param date 計算させたい日付
 * @return 1900年1月1日からの経過日数. ただし,1900年1月1日は1日目とする.
 */
int year_day(date_t date) {
  int yday = 0;
  int y, m;
  /* 1990年1月1日から (year - 1)年の経過日数の計算 */
  for (y = 1900; y < date.year; y++) {
    for (m = 1; m < 12; m++) {
      yday += how_many_days_in(y, m);
    }
  }
  /* year 年1月1日から year 年 month 月の月末までの経過日数を足す */
  for (m = 1; m < date.month; m++) {
    yday += how_many_days_in(date.year, m);
  }
  /* 最後に day 日を足す */
  yday += date.day;
  return yday;
}

/**
 * 日付(date_t)の比較を行う.
 * @param judge_date 基準となる月日
 * @param when 指定される月日
 * @return 基準となる日付が指定された日付よりも前にある場合 1, それ以外は 0 を返す.
 * ただし,日付が等しいときに0になることに注意すること.
 */
int isBefore(date_t judge_date, date_t when) {
  return year_day(judge_date) < year_day(when) ? 1 : 0;
}

/**
 * 与えられた日付が有効なものかを判定します.
 * @param date 判断日
 * @return 有効なものである場合: 1, 有効でない場合: 0
 * 有効であるとは,
 */
int is_valid(date_t date) {
  /* 月のバリデーション */
  if (!(1 <= date.month && date.month <= 12)) {
    return 0;
  }
  /* 日のバリデーション */
  if (!(1 <= date.day && date.day <= how_many_days_in(date.year, date.month))) {
    return 0;
  }
  return 1;
}

int main() {
  date_t birth_date = {
    2001, 6, 14
  };

  date_t today_date = {
    2021, 7, 9
  };

  /* 入力バリデーション */
  /* 日付が不正なものであったら,エラーメッセージを出力して終了 */
  if (!is_valid(birth_date) || !is_valid(today_date)) {
    printf("与えられた日付が不正なものです.");
    return 0;
  }
  /* 誕生日が未来だったら,エラーメッセージを出力して終了 */
  if (isBefore(today_date, birth_date) == 1) {
    printf("誕生日が未来です.");
    return 0;
  }

  int age;
  /* 年を今年に置き換えた誕生日 */
  date_t birth_date_replaced_year = {
    today_date.year,
    birth_date.month,
    birth_date.day
  };
  /* 年齢は現在の年の誕生月日の方が過ぎていたら単に年の差,そうでない場合はそのまま差を取って1を引く. */
  if (year_day(birth_date_replaced_year) < year_day(today_date)) {
    /* 誕生月日の方が早い (もうその年の誕生日が過ぎている) */
    age = today_date.year - birth_date.year;
  } else {
    age = today_date.year - birth_date.year - 1;
  }
  printf("あなたの年齢は%d歳!", age);
}