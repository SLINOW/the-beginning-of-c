#include <stdio.h>

/*
 * 本来,与えられた日付が正しいものであるかどうか,誕生日が未来ではないかを確認する必要がある.
 * このよう正当性の確認を「バリデーション」という.
 * 本プログラムは,初心者向けに「正しい日付形式が入力されていることを前提として」プログラムを作成する.
 * (バリデーションを含めた詳しいプログラムが知りたい場合は, exe06_2_advanced.c を参照すること.
 *
 * 誕生日と与えられた任意の日付から,年齢を求める.
 *   - 年齢は,その年の誕生日をすぎていたら,年の引き算
 *   - また誕生日を迎えていなければ,年の引き算 - 1 歳
 */

int main() {
  int birth_year = 2001, birth_month = 6, birth_day = 14;
  int today_year = 2021, today_month = 7, today_day = 21;

  /* 月がすでにすぎていたら,誕生日をすぎていることを意味する. */
  /*if (birth_month < today_month) {
    *//* すでに誕生日が過ぎているパターン *//*
  } else if (birth_month == today_month) {
    if (birth_day <= today_day) {
      *//* 誕生日が過ぎているパターン *//*
    } else {
      *//* 誕生日が過ぎていないパターン *//*
    }
  } else {
    *//* 誕生日が過ぎていないパターン *//*
  }*/

  /*
   * 上記の処理を書きたいわけであるが,複数回同じことを書かなくてはならず効率的ではない.
   * なので,論理演算子(||, &&)を用いて少し簡単に書いてみる.(もちろん上のコードでも動作する.)
   */
  if ((birth_month < today_month) || (birth_month == today_month && birth_day <= today_day)) {
    /* 誕生日が過ぎているパターン */
    printf("あなたの年齢は%d歳!", today_year - birth_year);
  } else {
    /* 誕生日が過ぎていないパターン */
    printf("あなたの年齢は%d歳!", today_year - birth_year - 1);
  }
}