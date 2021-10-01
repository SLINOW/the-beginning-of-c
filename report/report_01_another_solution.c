/*
 * Created by karayuu on 2021/09/13.
 */
#include <stdio.h>
#include <stdbool.h>

/** 日付を表す構造体 */
typedef struct {
  /** 月 */
  int month;
  /** 日s */
  int day;
} date_t;

/** 星座の条件を表す構造体 */
typedef struct {
  /** 開始日 */
  date_t start_date;
  /** 終了日 */
  date_t end_date;
  /** 星座名 */
  char* name;
} condition_t;

/**
 * 与えられた年月が何日終わりであるかを返します.
 * 2月を指定した場合は,閏年を考慮し29日を返します.
 *
 * @param month 計算させたい月(1 <= month <= 12において定義される).
 * @return 指定された年月が何日終わりであるか. (通常29,30,31のいずれかである.)
 */
int unsafe_how_many_days_in(int month) {
  switch (month) {
    case 4:
    case 6:
    case 9:
    case 11:
      return 30;
    case 2:
      return 29;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      printf("This blanch shouldn't be reached. \nMaybe argument \"month\" isn't between 1 and 12.\n");
      return -1;
  }
}

/**
 * 与えられた日付が有効なものかを判定します.
 * @param date 判断日
 * @return 有効なものである場合: true, 有効でない場合: false
 */
bool is_valid(date_t date) {
  if (!(1 <= date.month && date.month <= 12)) {
    return false;
  } else if (!(1 <= date.day && date.day <= unsafe_how_many_days_in(date.month))) {
    return false;
  }
  return true;
}

/**
 * 1月1日からの経過日数を返します.
 * @param date 計算させたい日付
 * @return 1月1日からの経過日数. ただし,1月1日は1日目とする.
 */
int unsafe_date_to_days(date_t date) {
  int days = 0, i;
  for (i = 1; i < date.month; i++) {
    days += unsafe_how_many_days_in(i);
  }
  days += date.day;
  return days;
}

/**
 * 日付(date_t)の比較を行う.
 * @param judge_date 基準となる月日
 * @param when 指定される月日
 * @return 基準となる日付が指定された日付以前にある場合 1, それ以外は 0 を返す.
 * ただし,日付が等しいときに1になることに注意すること.
 */
bool unsafe_is_before(date_t judge_date, date_t when) {
  return unsafe_date_to_days(judge_date) <= unsafe_date_to_days(when);
}

/**
 * 日付が指定された日の間にあるかどうかを判定します.
 * @param judge_date 判定日
 * @param from_date 開始日
 * @param to_date 終了日
 * @return 判定日が開始日と終了日にの間に入っている場合 true, それ以外の場合 false.
 */
bool unsafe_is_between(date_t judge_date, date_t from_date, date_t to_date) {
  return (unsafe_is_before(from_date, judge_date) && unsafe_is_before(judge_date, to_date));
}

/**
 * 与えられた日付と条件を判断し,条件を満たすかを返します.
 * @param date 日付
 * @param condition 条件
 * @return 条件を満たす場合: 1 / 満たさない場合: 0
 */
bool unsafe_judge(date_t date, condition_t condition) {
  return unsafe_is_between(date, condition.start_date, condition.end_date);
}

int main() {
  date_t date = {
    6, 14
  };

  condition_t aries = {
    {3, 21}, {4, 19}, "おひつじ座"
  };
  condition_t taurus = {
    {4, 20}, {5, 20}, "おうし座"
  };
  condition_t gemini = {
    {5, 21}, {6, 21}, "ふたご座"
  };
  condition_t cancer = {
    {6, 22}, {7, 22}, "かに座"
  };
  condition_t leo = {
    {7, 23}, {8, 22}, "しし座"
  };
  condition_t virgo = {
    {8, 23}, {9, 22}, "おとめ座"
  };
  condition_t libra = {
    {9, 23}, {10, 23}, "てんびん座"
  };
  condition_t scorpio = {
    {10, 24}, {11, 22}, "さそり座"
  };
  condition_t sagittarius = {
    {11, 23}, {12, 21}, "いて座"
  };
  condition_t capricorn_former = {
    {12, 22}, {12, 31},"やぎ座"
  };
  condition_t capricorn_latter = {
    {1, 1}, {1, 19},"やぎ座"
  };
  condition_t aquarius = {
    {1, 20}, {2, 18}, "みずがめ座"
  };
  condition_t pisces = {
    {2, 19}, {3, 20}, "うお座"
  };

  condition_t conditions[] = {
    aries, taurus, gemini, cancer, leo, virgo, libra, scorpio,
    sagittarius, capricorn_former, capricorn_latter, aquarius, pisces
  };
  int i;

  if (!is_valid(date)) {
    printf("%d月%d日: 正しい月日を指定してください", date.month, date.day);
    return 0;
  }

  for (i = 0; i < 13; i++) {
    if (unsafe_judge(date, conditions[i])) {
      printf("%d月%d日は%s\n", date.month, date.day, conditions[i].name);
    }
  }
}
