/*
 * Created by karayuu on 2021/07/09.
 */
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

int withIn(int from_month, int from_day, int to_month, int to_day, int )

int main() {
  int month = 1, day = 1;

  /* 入力バリデーション */
  /* 日は月によって違うのでそれも確かめる (閏年も含むとして考えておく) */
  int is_valid = 1; /* 日が有効かどうかのフラグ (0: 不正 / 1: 正常) */
  switch (month) {
    case 4:
    case 6:
    case 9:
    case 11:
      if (!(1 <= day && day <= 30)) {
        is_valid = 0;
      }
      break;
    case 2:
      if (!(1 <= day && day <= 29)) {
        is_valid = 0;
      }
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      if (!(1 <= day && day <= 31)) {
        is_valid = 0;
      }
    default:
      /* ここに到達した時点で,ありえない月であることがわかる */
      is_valid = 0;
      break;
  }

  /* 不正な月日だったらエラーメッセージを出しておく */
  if (is_valid == 0) {
    printf("%d月%d日: 正しい月日を指定してください", month, day);
    return 0;
  }
}