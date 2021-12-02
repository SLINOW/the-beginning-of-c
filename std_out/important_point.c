/*
 * Created by karayuu on 2021/11/25.
 */
#include <stdio.h>

int main() {
  /*
  char ch1, ch2, ch3;

  scanf("%c%c%c", &ch1, &ch2, &ch3);

  printf("入力１：%c\n", ch1);
  printf("入力２：%c\n", ch2);
  printf("入力３：%c\n", ch3);
  */
  int num;
  char ch;

  scanf("%d%*c%c", &num, &ch);

  printf("数値:%d\n", num);
  printf("文字:%c\n", ch);
}
