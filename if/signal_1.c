#include <stdio.h>

int main() {
  char signal = 'g';

  if (signal == 'b' || signal == 'g') {
    /* || は or の意味なので, signal が 'b' または 'g' のときここにくる */
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
    /* (わかる人向け: いわゆるフォールスルー) */
    case 'b':
    case 'g':
      /* signal が 'b' か 'g' の場合にここにくる */
      printf("進め\n");
      break;

    default:
      /* どの条件も満たされないときにここにくる */
      printf("%cは信号の色ではありません\n", signal);
  }
}