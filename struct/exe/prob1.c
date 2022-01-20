/*
 * Created by karayuu on 2022/01/14.
 */
#include <stdio.h>

/** 長方形の構造体 */
struct rectangle {
  /** 長方形の縦の長さ */
  int height;
  /** 長方形の横の長さ */
  int width;
};

/**
 * 長方形の構造体を受け取って, 面積を返す関数
 */
int area_of(struct rectangle rectangle) {
  return rectangle.height * rectangle.width;
}

int main() {
  /* 長方形を作ってみる */
  struct rectangle rectangle = {
    10, 10
  };
  printf("縦の長さ: %d, 横の長さ: %d の長方形の面積は %d\n",
         rectangle.height,
         rectangle.width,
         area_of(rectangle)
  );
}
