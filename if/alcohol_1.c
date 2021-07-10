#include <stdio.h>

int main() {
  int age = 15; /* 初期化 */
  
  if (age >= 20) {
    printf("%d歳はお酒が飲めます\n", age);
  } else {
    printf("%d歳はお酒が飲めません\n", age);
  }
  /* 以下同義 */
  if (!(age < 20)) {
    printf("%d歳はお酒が飲めます\n", age);
  } else {
    printf("%d際はお酒が飲めません\n", age);
  }
  if (age > 0) {

  }
}