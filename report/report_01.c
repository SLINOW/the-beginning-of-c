/*
 * Created by karayuu on 2021/07/22.
 */
#include <stdio.h>

int main() {
  int month = 6, day = 14;

  if ((month == 3 && 21 <= day && day <= 31) || (month == 4 && 1 <= day && day <= 19)) {
    printf("%d月%d日はおひつじ座です\n", month, day);
  } else if ((month == 4 && 20 <= day && day <= 30) || (month == 5 && 1 <= day && day <= 20)) {
    printf("%d月%d日はおうし座です\n", month, day);
  } else if ((month == 5 && 21 <= day && day <= 31) || (month == 6 && 1 <= day && day <= 21)) {
    printf("%d月%d日はふたご座です\n", month, day);
  } else if ((month == 6 && 22 <= day && day <= 30) || (month == 7 && 1 <= day && day <= 22)) {
    printf("%d月%d日はかに座です\n", month, day);
  } else if ((month == 7 && 23 <= day && day <= 31) || (month == 8 && 1 <= day && day <= 22)) {
    printf("%d月%d日はしし座です\n", month, day);
  } else if ((month == 8 && 23 <= day && day <= 31) || (month == 9 && 1 <= day && day <= 22)) {
    printf("%d月%d日はおとめ座です\n", month, day);
  } else if ((month == 9 && 23 <= day && day <= 30) || (month == 10 && 1 <= day && day <= 23)) {
    printf("%d月%d日はてんびん座です\n", month, day);
  } else if ((month == 10 && 24 <= day && day <= 31) || (month == 11 && 1 <= day && day <= 22)) {
    printf("%d月%d日はさそり座です\n", month, day);
  } else if ((month == 11 && 23 <= day && day <= 30) || (month == 12 && 1 <= day && day <= 21)) {
    printf("%d月%d日はいて座です\n", month, day);
  } else if ((month == 12 && 22 <= day && day <= 31) || (month == 1 && 1 <= day && day <= 19)) {
    printf("%d月%d日はやぎ座です\n", month, day);
  } else if ((month == 1 && 20 <= day && day <= 31) || (month == 2 && 1 <= day && day <= 28)) {
    printf("%d月%d日はみずがめ座です\n", month, day);
  } else if ((month == 2 && 19 <= day && day <= 29) || (month == 3 && 1 <= day && day <= 20)) {
    /* 2月は閏年の関係で28日の場合と29日の場合があるが,今回は年を考慮しないので29日までとしている */
    printf("%d月%d日はうお座です\n", month, day);
  } else {
    printf("%d月%d日: 正しい月日を指定してください\n", month, day);
  }
}