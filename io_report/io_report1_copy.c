#include <stdio.h>

int main() {
  int i = 0;
  char string[100];
  int num1 = 0, num2 = 0, num3 = 0;
  scanf("%s", string);
  while (string[i] != '\0') {
    if (string[i] >= 'A' && string[i] <= 'Z') {
      num1++;
    } else if (string[i] >= 'a' && string[i] <= 'z') {
      num1++;
    } else if (string[i] >= '0' && string[i] <= '9') {
      num2++;
    } else {
      num3++;
    }
    i++;
  }
  printf("%s\nアルファベット：%d文字\n数値：%d文字\nその他：%d文字\n", string, num1, num2, num3);
}