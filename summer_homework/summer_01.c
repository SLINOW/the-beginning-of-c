/*
 * Created by karayuu on 2021/07/09.
 */
#include <stdio.h>

int main() {
  int year = 2021;

  if (year % 400 == 0) {
    /* 年が400で割り切れたら閏年 */
    printf("%d年は閏年です", year);
  } else if (year % 100 == 0) {
    /* 年が100で割り切れたら閏年でない */
    printf("%d年は閏年ではないです", year);
  } else if (year % 4 == 0) {
    /* 年が4で割り切れたら閏年 */
    printf("%d年は閏年です", year);
  } else {
    printf("%d年は閏年ではないです", year);
  }
}