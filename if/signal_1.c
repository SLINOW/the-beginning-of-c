#include <stdio.h>

int main() {
  char signal = 'g';

  if (signal == 'b' || signal == 'g') {
    printf("進め\n");
  } else if (signal == 'r') {
    printf("止まれ\n");
  } else if (signal == 'y') {
    printf("注意\n");
  } else {
    printf("%cは信号の色ではありません\n", signal);
  }

  /* 以下同義 */
  switch (signal) {
    case 'r':
      printf("止まれ\n");
      break;
    case 'y':
      printf("注意\n");
      break;
    case 'b':
    case 'g':
      printf("進め\n");
      break;

    default:
      printf("%cは信号の色ではありません\n", signal);
  }
}