#include <stdio.h>

void calc(float x, float y, char op) {
  int error = 0;
  float answer;

  if (!(0 <= x && x <= 500) || !(0 <= y && y <= 500)) {
    printf("Error : 数値が0以上500以下ではない.\n");
    printf("数値1 : %f\n", x);
    printf("数値2 : %f\n", y);
    error = -1;
  }
  if (!(op == '+' || op == '-' || op == '*' || op == '/')) {
    printf("Error : 演算子が '+', '-', '*', '/' のいずれでもない.\n");
    printf("演算子 : %c", op);
    error = -1;
  }
  if (op == '/' && y == 0) {
    printf("Error : 計算がゼロ除算となる.\n");
    printf("%f ÷ %f\n", x, y);
    error = -1;
  }
  if (error == -1) {
    return;
  }

  switch (op) {
    case '+':
      answer = x + y;
      break;
    case '-':
      answer = x - y;
      break;
    case '*':
      answer = x * y;
      break;
    case '/':
      answer = x / y;
      break;
  }

  printf("%f %c %f = %f\n", x, op, y, answer);
}

int main() {
  calc(1.5, 2.5, '+');
}