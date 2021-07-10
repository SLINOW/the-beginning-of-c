#include <stdio.h>

int main() {
  int i; // 整数型の変数iを宣言
  i = 1; // iに1を代入(初期化)

  int j = 1; // 同時にもできる

  // 複数宣言できる
  int k, l;
  k = 1;
  l = 2;

  // 複数の変数の宣言と初期化をまとめてできる
  int m = 1, n = 2;

  // 指定子
  printf("%d\n", i);

  int a = 1;
  float b = 1.5;
  char c = 'c';

  printf("a = %d\n", i); // 整数型
  printf("b = %f\n", b); // 小数型
  printf("c = %c\n", c); // 文字型

  // 複数の指定子は,順に変数を引数として並べる
  printf("a = %d\nb = %f\nc = %c\n", a, b, c);

  int d = 1;
  int e = 10;
  int f = 100;

  // 2桁分の幅を確保して出力
  printf("%2d\n", d);
  printf("%2d\n", e);
  printf("%3d\n%3d\n%3d\n",d, e, f);

  // 変数名
  int x1 = 1;
  int x2 = 2;
  int ans = x1 * x2;

  printf("%d * %d = %d\n", x1, x2, ans);
}