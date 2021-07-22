/*
 * Created by karayuu on 2021/07/09.
 */
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

/** 星座の条件を表す構造体 */
typedef struct {
  /** 開始日 (この日を含む) */
  date_t from;
  /** 終了日 (この日を含む) */
  date_t to;
  /** 星座名 */
  char* name;
} condition_t;

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
 * @return 基準となる日付が指定された日付以前にある場合 1, それ以外は 0 を返す.
 * ただし,日付が等しいときに1になることに注意すること.
 */
int isInBefore(date_t judge_date, date_t when) {
  return year_day(judge_date) <= year_day(when) ? 1 : 0;
}

/**
 * 日付が指定された日の間にあるかどうかを判定します.
 * @param judge_date 判定日
 * @param from_date 開始日
 * @param to_date 終了日
 * @return 判定日が開始日と終了日にの間に入っている場合 1, それ以外の場合 0.
 */
int withIn(date_t judge_date, date_t from_date, date_t to_date) {
  return (isInBefore(from_date, judge_date) == 1 && isInBefore(judge_date, to_date) == 1) ? 1 : 0;
}

/**
 * 与えられた日付が有効なものかを判定します.
 * @param date 判断日
 * @return 有効なものである場合: 1, 有効でない場合: 0
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

/**
 * 与えられた日付と条件を判断し,条件を満たすかを返します.
 * @param date 日付
 * @param condition 条件
 * @return 条件を満たす場合: 1 / 満たさない場合: 0
 */
int judge(date_t date, condition_t condition) {
  if (withIn(date, condition.from, condition.to)) {
    return 1;
  }
  return 0;
}

int main() {
  int year = 2024, month = 1, day = 1;
  date_t time = {
    year, month, day
  };
  date_t adjustment_time = {
    year, 3, 21
  };
  /* 3月21日よりも前の日付が入力された場合,年の軸を1年ずらす必要がある */
  int diff = isInBefore(time, adjustment_time) == 1 ? -1 : 0;
  /* 判断に用いるデータ */
  date_t f_aries = {year + diff, 3, 21 };
  date_t t_aries = {year + diff, 4, 19 };
  date_t f_taurus = {year + diff, 4, 20 };
  date_t t_taurus = {year + diff, 5, 20 };
  date_t f_gemini = {year + diff, 5, 21 };
  date_t t_gemini = {year + diff, 6, 21 };
  date_t f_cancer = {year + diff, 6, 22 };
  date_t t_cancer = {year + diff, 7, 22 };
  date_t f_leo = {year + diff, 7, 23 };
  date_t t_leo = {year + diff, 8, 22 };
  date_t f_virgo = {year + diff, 8, 23 };
  date_t t_virgo = {year + diff, 9, 22 };
  date_t f_libra = {year + diff, 9, 23 };
  date_t t_libra = {year + diff, 10, 23 };
  date_t f_scorpio = {year + diff, 10, 24 };
  date_t t_scorpio = {year + diff, 11, 22 };
  date_t f_sagittarius = {year + diff, 11, 23 };
  date_t t_sagittarius = {year + diff, 12, 21 };
  date_t f_capricorn = {year + diff, 12, 22 };
  date_t t_capricorn = {year + diff + 1, 1, 19 };
  date_t f_aquarius = {year + diff + 1, 1, 20 };
  date_t t_aquarius = {year + diff + 1, 2, 18 };
  date_t f_pisces = {year + diff + 1, 2, 19 };
  date_t t_pisces = {year + diff + 1, 3, 20 };

  condition_t aries = { f_aries, t_aries, "おひつじ座" };
  condition_t taurus = { f_taurus, t_taurus, "おうし座" };
  condition_t gemini = { f_gemini, t_gemini, "ふたご座" };
  condition_t cancer = { f_cancer, t_cancer, "かに座" };
  condition_t leo = { f_leo, t_leo, "しし座" };
  condition_t virgo = { f_virgo, t_virgo, "おとめ座" };
  condition_t libra = { f_libra, t_libra, "てんびん座" };
  condition_t scorpio = { f_scorpio, t_scorpio, "さそり座" };
  condition_t sagittarius = { f_sagittarius, t_sagittarius, "いて座" };
  condition_t capricorn = { f_capricorn, t_capricorn, "やぎ座" };
  condition_t aquarius = { f_aquarius, t_aquarius, "みずがめ座" };
  condition_t pisces = { f_pisces, t_pisces, "うお座" };

  condition_t conditions[] = {
    aries, taurus, gemini, cancer, leo, virgo,
    libra, scorpio, sagittarius, capricorn, aquarius, pisces
  };

  /* 入力バリデーション */
  if (is_valid(time) == 0) {
    printf("%d月%d日: 正しい月日を指定してください", time.month, time.day);
    return 0;
  }

  int i;
  for (i = 0; i < 12; i++) {
    if (judge(time, conditions[i]) == 1) {
      printf("%d月%d日は%s\n", time.month, time.day, conditions[i].name);
    }
  }
}