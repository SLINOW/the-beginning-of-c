/*
 * Created by karayuu on 2021/10/17.
 */
#include <stdio.h>

int main() {
  int map[5][5] = {
    {0, 1, 1, 1, 0},
    {0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0},
    {0, 1, 1, 0, 1},
    {0, 0, 1, 0, 0}
  };
  char direction[] = "frrfrffr";
  int pos_x = 0, pos_y = 0;
  int i;

  for (i = 0; i < sizeof(direction); i++) {
    /* 進めてみる */
    int next_pos_x = pos_x, next_pos_y = pos_y;
    switch (direction[i]) {
      case 'f':
        printf("前に進みます.\n");
        next_pos_y++;
        break;
      case 'r':
        printf("右に進みます.\n");
        next_pos_x++;
        break;
      case 'l':
        printf("左に進みます.\n");
        next_pos_x--;
        break;
      case 'b':
        printf("後ろに進みます.\n");
        next_pos_y--;
        break;
      default:
        printf("方向指定が正しくありません。（このターンに対する処理は飛ばされます.）\n");
        printf("前：f\n後ろ：b\n左：l\n右：r\n");
        continue;
    }
    /* 範囲外の判定 */
    if (next_pos_x < 0 || 4 < next_pos_x || next_pos_y < 0 || 4 < next_pos_y) {
      printf("移動に失敗しました.（移動先がマップ外）\n");
      return 1;
    }
    /* ゴールの判定 */
    if (next_pos_x == 4 && next_pos_y == 4) {
      printf("ゴールです！おめでとうございます！\n");
      return 1;
    }
    /* 障害物の判定 */
    if (map[next_pos_y][next_pos_x] != 0) {
      printf("障害物があるため,進めません.（このターンに対する処理は飛ばされます.）\n");
      continue;
    }
    /* 移動できる条件を満たすので動かす */
    pos_x = next_pos_x, pos_y = next_pos_y;
  }
}