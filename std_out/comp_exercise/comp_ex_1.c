/*
 * Created by karayuu on 2021/11/27.
 */
#include <stdio.h>

int main() {
  int sum = 0;
  int input;

  while (scanf("%d", &input) != EOF) {
    sum += input;
    printf("合計 : %d\n", sum);
  }
}
