/*
 * Created by karayuu on 2022/01/14.
 */

#include <stdio.h>

struct S_Coordinate {
  /** 緯度 */
  double lon;
  /** 軽度 */
  double lat;
};

int main() {
  struct S_Coordinate pos;
  struct S_Coordinate *p_pos = &pos;

  /* 通常の変数の場合 */
  pos.lon = 139.74;
  pos.lat = 35.65;

  /* ポインタの場合 => p_pos は ポインタなので 間接演算子 * をかます必要あり */
  printf("軽度: %lf\n緯度: %lf\n", (*p_pos).lon, (*p_pos).lat);

  /* ポインタからメンバ変数に間接演算子をかまさずアクセスするなら　-> (アロー演算子) が必要 */
  printf("軽度: %lf\n緯度: %lf\n",
         p_pos->lon,
         p_pos->lat
  );
}