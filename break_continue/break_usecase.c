/*
 * Created by karayuu on 2021/10/19.
 */
#include <stdio.h>

int main() {
  int array[5] = {5, 8, 6, 3, 4};
  int i;

  for (i = 0; i < 5; i++) {
    if (array[i] == 6) {
      printf("array[%d] = 6\n", i);
      break;
    }
  }
}
