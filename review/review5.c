/*
 * Created by karayuu on 2021/09/30.
 */
#include <stdio.h>

int main() {
  char user_hand = 'r';
  printf("You: %c, CPU: %c\n", user_hand, 'r');

  switch (user_hand) {
    case 'r':
      printf("Draw.\n");
      break;
    case 's':
      printf("You lose.\n");
      break;
    case 'p':
      printf("You win.\n");
      break;
  }
}