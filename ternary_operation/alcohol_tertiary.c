#include <stdio.h>

int main() {
  int age = 15;

  age >= 20 ? printf("%d歳はお酒が飲めます\n", age) :
    printf("%d際はお酒が飲めません\n", age);
}