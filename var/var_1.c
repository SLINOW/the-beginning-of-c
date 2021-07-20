#include <stdio.h>

int main() {
  int i; /* 整数型の変数iを宣言 */
  i = 1; /* iに1を代入(初期化) */

  int j = 1; /* 宣言と代入を同時にもできる */

  /* まとめて複数の変数を宣言できる */
  int k, l;
  k = 1;
  l = 2;

  /* 複数の変数の宣言と初期化をまとめてできる */
  int m = 1, n = 2;

  /* 指定子 %d は整数型(int)を表す */
  printf("%d\n", i);

  int a = 1;
  float b = 1.5;
  char c = 'c';

  printf("a = %d\n", i); /* 整数型(int) */
  printf("b = %f\n", b); /* 小数型(float) */
  printf("c = %c\n", c); /* 文字型(char) */

  /* 複数の指定子は,順に変数を引数としてカンマ区切りで並べる */
  printf("a = %d\nb = %f\nc = %c\n", a, b, c);

  int d = 1;
  int e = 10;
  int f = 100;

  /* 2桁分の幅を確保して出力 (%2d) */
  printf("%2d\n", d);
  printf("%2d\n", e);
  /* もちろん複数の指定子を使うこともできる */
  printf("%3d\n%3d\n%3d\n",d, e, f);

  /* 変数名は1文字でなくても良い わかりやすい名前をつけると良い */
  int x1 = 1;
  int x2 = 2;
  int ans = x1 * x2;

  printf("%d * %d = %d\n", x1, x2, ans);
}