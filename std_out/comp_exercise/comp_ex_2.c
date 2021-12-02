/*
 * Created by karayuu on 2021/11/27.
 */
#include <stdio.h>

int main() {
  int score[20];
  int sum = 0, num;
  float i = 0;

  while (scanf("%d", &num) != EOF) {
    sum += num;
    i++;
  }
  printf("平均点 : %f\n", sum / i);
}