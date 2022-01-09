#include <stdio.h>

int main() {
  float calc = 0;
  char op;
  float num;
  while (scanf("%c%*c%f%*c", &op, &num) != EOF) {
    switch (op) {
      case '+':
        calc += num;
        break;
      case '-':
        calc -= num;
        break;
      case '*':
        calc *= num;
        break;
      case '/':
        if (num == 0) {
          printf("エラー：ゼロ除算になる。\n");
          break;
        }
        calc /= num;
        break;
      default:
        printf("エラー：演算子ではない。\n");
        break;
    }
    printf("結果：%f\n", calc);
  }
}