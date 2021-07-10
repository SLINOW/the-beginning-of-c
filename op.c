#include <stdio.h>

int main() {
  int i = 2, j = 3;
  int k = i * j;
  printf("k = %d\n", k);

  int l = 1;
  l = l + 1; // l + 1 が計算されてから,代入処理が行われる
  printf("l = %d\n", l);

  int x = 10;
  printf("x = %d\n", x);
  // x = x + 1 と同じ
  x += 1;
  printf("x += 1: %d\n", x);
  // x = x - 3 と同じ
  x -= 3;
  printf("x -= 3: %d\n", x);
  // x = x * 2 と同じ
  x *= 2;
  printf("x *= 2: %d\n", x);
  // x = x % 2 と同じ (% は余りを求める演算子)
  x %= 2;
  // ここの%は大文字にしないと指定子として判断されてしまう
  printf("x ％= 2: %d\n", x);
  // インクリメント x = x + 1, x += 1 と同じ
  x++;
  printf("x++: %d\n", x);
  // デクリメント x = x - 1, x -= 1 と同じ
  x--;
  printf("x--: %d\n", x);
}