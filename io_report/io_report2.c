//
// Created by karayuu on 2021/12/17.
//

#include <stdio.h>

int main() {
  /* 計算結果を保存しておく変数 */
  float save = 0;
  /* 演算子と入力された数値 */
  char operation;
  float input;

  /* EOF まで読み続ける */
  while (scanf("%c%f", &operation, &input) != EOF) {
    /* 演算子のチェック */
    if (!(operation == '+' || operation == '-' || operation == '*' || operation == '/')) {
      printf("エラー：演算子ではない。\n");
      continue;
    }
    /* ゼロ除算のチェック */
    if (operation == '/' && input == 0) {
      printf("エラー：ゼロ除算になる。\n");
      continue;
    }

    /* 演算子に対応する計算を行い,結果を書き換える */
    switch (operation) {
      case '+':
        save += input;
        break;
      case '-':
        save -= input;
        break;
      case '*':
        save *= input;
        break;
      case '/':
        save /= input;
        break;
    }

    /* 結果の出力 */
    printf("結果：%f\n", save);
  }
}