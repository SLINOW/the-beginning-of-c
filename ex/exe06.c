#include <stdio.h>

int main() {
  int year = 2022;

  switch (year % 12) {
    case 0:
      printf("%d: Monkey\n", year);
      break;
    case 1:
      printf("%d: Rooster\n", year);
      break;
    case 2:
      printf("%d: Dog\n", year);
      break;
    case 3:
      printf("%d: Pig\n", year);
      break;
    case 4:
      printf("%d: Rat\n", year);
      break;
    case 5:
      printf("%d: Ox\n", year);
      break;
    case 6:
      printf("%d: Tiger\n", year);
      break;
    case 7:
      printf("%d: Rabbit\n", year);
      break;
    case 8:
      printf("%d: Dragon\n", year);
      break;
    case 9:
      printf("%d: Snake\n", year);
      break;
    case 10:
      printf("%d: Horse\n", year);
      break;
    case 11:
      printf("%d: Goat\n", year);
      break;
  }
}