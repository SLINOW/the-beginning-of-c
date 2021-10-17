/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int scores[] = {30, 90, 10, 60, 100, 40, 70, 80, 20, 50};
  int sum = 0, size = 10;
  int i;
  for (i = 0; i < size; i++) {
    sum += scores[i];
  }
  printf("平均点：%d点\n", sum / size);
}
