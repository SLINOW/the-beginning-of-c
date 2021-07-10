#include <stdio.h>

int main() {
  int a = 3, b = 5, c = 7;

  /* 判別式 */
  int d = b * b - 4 * a * c;
  if (d > 0) {
    printf("2");
  } else if (d == 0) {
    printf("1");
  } else {
    printf("0");
  }
}