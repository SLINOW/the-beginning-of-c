#include <stdio.h>

/*
 * 1. まずは,日付が正しい形式であるかを確認する必要がある.
 *   - 月の範囲が1から12の間であることを確認する.
 *   - 日の範囲を確認する.
 *     - 4,6,9,11月は30日まで
 *     - 1,3,5,7,8,10,12月は31日まで
 *     - 2月は閏年なら29日まで,閏年でないなら28日まで
 *       - 年が400の倍数のとき閏年
 *       - 年が100の倍数のとき閏年でない
 *       - 年が4の倍数のとき閏年
 *   - 誕生日が未来だったら年齢の計算ができないのでダメ.
 * 2. 日付が正しい形式であることが確認できたら,年齢を求める.
 *   - 年齢は,その年の誕生日をすぎていたら,年の引き算
 *   - また誕生日を迎えていなければ,年の引き算 - 1 歳
 *
 * 以上を把握した上でコードを書いていく.
 */

int main() {
  int birth_year = 2001, birth_month = 6, birth_day = 14;
  int today_year = 2020, today_month = 7, today_day = 20;

  /* 入力バリデーション */
  /* 月の範囲が1~12であることを確認する */
  if (!(1 <= birth_month && birth_month <= 12)) {
    printf("誕生日月が不正な値です.");
    /* return 0 と書くことでプログラムを終了することが出来る */
    return 0;
  }
  if (!(1 <= today_year && today_year <= 12)) {
    printf("指定された月が不正です.");
    return 0;
  }

  /* 1~12以外の値は弾いているので,ここで1~12が入力されていることが保証されている */
  switch (birth_month) {
    case 4:
    case 6:
    case 9:
    case 11:
      /* 4,6,9,11月は30日まで */
      if (!(1 <= birth_day && birth_day <= 30)) {
        printf("誕生日に不正な日にちが指定されています.(%d年%d月は30日までです.)", birth_year, birth_month);
        return 0;
      }
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      /* 1,3,5,7,8,10,12月は31日まで */
      if (!(1 <= birth_day && birth_day <= 31)) {
        printf("誕生日に不正な日にちが指定されています.(%d年%d月は31日までです.)", birth_year, birth_month);
        return 0;
      }
      break;
    default:
      /* 2月 */
      if (birth_year % 400 == 0) {
        /* 閏年の場合 */
        if (!(1 <= birth_day && birth_day <= 29)) {
          printf("誕生日に不正な日にちが指定されています.(%d年%d月は29日までです.)", birth_year, birth_month);
          return 0;
        }
      } else if (birth_year % 100 == 0) {
        /* 閏年でない場合 */
        if (!(1 <= birth_day && birth_day <= 28)) {
          printf("誕生日に不正な日にちが指定されています.(%d年%d月は28日までです.)", birth_year, birth_month);
          return 0;
        }
      } else if (birth_year % 4 == 0) {
        /* 閏年の場合 */
        if (!(1 <= birth_day && birth_day <= 29)) {
          printf("誕生日に不正な日にちが指定されています.(%d年%d月は29日までです.)", birth_year, birth_month);
          return 0;
        }
      } else {
        if (!(1 <= birth_day && birth_day <= 28)) {
          printf("誕生日に不正な日にちが指定されています.(%d年%d月は28日までです.)", birth_year, birth_month);
          return 0;
        }
      }
      break;
  }

  /* 今日の日にちのバリデーション */
  switch (today_month) {
    case 4:
    case 6:
    case 9:
    case 11:
      /* 4,6,9,11月は30日まで */
      if (!(1 <= today_day && today_day <= 30)) {
        printf("指定された日付に不正な日にちが指定されています.(%d年%d月は30日までです.)", today_year, today_month);
        return 0;
      }
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      /* 1,3,5,7,8,10,12月は31日まで */
      if (!(1 <= today_day && today_day <= 31)) {
        printf("指定された日付に不正な日にちが指定されています.(%d年%d月は31日までです.)", today_year, today_month);
        return 0;
      }
      break;
    default:
      /* 2月 */
      if (today_year % 400 == 0) {
        /* 閏年の場合 */
        if (!(1 <= today_day && today_day <= 29)) {
          printf("指定された日付に不正な日にちが指定されています.(%d年%d月は29日までです.)", today_year, today_month);
          return 0;
        }
      } else if (today_year % 100 == 0) {
        /* 閏年でない場合 */
        if (!(1 <= today_day && today_day <= 28)) {
          printf("指定された日付に不正な日にちが指定されています.(%d年%d月は28日までです.)", today_year, today_month);
          return 0;
        }
      } else if (today_year % 4 == 0) {
        /* 閏年の場合 */
        if (!(1 <= today_day && today_day <= 29)) {
          printf("指定された日付に不正な日にちが指定されています.(%d年%d月は29日までです.)", today_year, today_month);
          return 0;
        }
      } else {
        if (!(1 <= today_day && today_day <= 28)) {
          printf("指定された日付に不正な日にちが指定されています.(%d年%d月は28日までです.)", today_year, today_month);
          return 0;
        }
      }
      break;
  }
}