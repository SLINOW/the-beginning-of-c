#include <stdio.h>

int main() {
  int a;
  float b;
  char c;
  int d[10];
  float e[10];
  char f[10];

  printf("aのアドレスは%p\n", &a);
  printf("aの大きさは%lu\n", sizeof(a));

  printf("bのアドレスは%p\n", &b);
  printf("bの大きさは%lu\n", sizeof(b));

  printf("cのアドレスは%p\n", &c);
  printf("cの大きさは%lu\n", sizeof(c));

  printf("dのアドレスは%p\n", &d);
  printf("dの大きさは%lu\n", sizeof(d));
  printf("d[0]のアドレスは%p\n", &d[0]);
  printf("d[0]の大きさは%lu\n", sizeof(d[0]));
  /* => この結果からわかるように, 配列のアドレス&dはその配列の0番目の要素のアドレス%d[0]と同じ値である. */
  printf("d[1]のアドレスは%p\n", &d[1]);
  printf("d[1]の大きさは%lu\n", sizeof(d[1]));

  printf("eアドレスは%p\n", &e);
  printf("eの大きさは%lu\n", sizeof(e));
  printf("e[0]のアドレスは%p\n", &e[0]);
  printf("e[0]の大きさは%lu\n", sizeof(e[0]));
  printf("e[1]のアドレスは%p\n", &e[1]);
  printf("e[1]の大きさは%lu\n", sizeof(e[1]));

  printf("fのアドレスは%p\n", &f);
  printf("fの大きさは%lu\n", sizeof(f));
  printf("f[0]のアドレスは%p\n", &f[0]);
  printf("f[0]の大きさは%lu\n", sizeof(f[0]));
  printf("f[1]のアドレスは%p\n", &f[1]);
  printf("f[1]の大きさは%lu\n", sizeof(f[1]));
}