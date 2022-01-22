/*
 * Created by karayuu on 2022/01/22.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kid {
  char name[50];
  struct kid *next;
};

/**
 * 与えられた kid の1つ次の kid の名前を出力
 */
void printNextKidName(struct kid *kid) {
  if (kid->next != NULL) {
    printf("%s\n", kid->next->name);
  }
}

/**
 * 与えられた kid の1つ次の kid のポインタを返す
 */
struct kid *nextKid(struct kid *kid) {
  return kid->next;
}

/**
 * リストの最後の kid の名前を出力する
 */
void printLastKidName(struct kid *kid) {
  if (kid != NULL) {
    /* kid->next が NULLだったらそれは最後の kid */
    while (kid->next != NULL) {
      kid = nextKid(kid);
    }
    printf("%s\n", kid->name);
  } else {
    printf("[エラー] 引数は NULL であってはなりません.\n");
  }
}

/**
 * リストの先頭の first_kid を受け取り, 順に名前を表示する
 */
void printKidsNameFrom(struct kid *first_kid) {
  struct kid *kid = first_kid;
  while (kid != NULL) {
    printf("%s\n", kid->name);
    kid = nextKid(kid);
  }
}

/**
 * first_kid を先頭とするリストの中に, name を持つ kid がいるかどうかを判断
 * 存在する場合は 1, しない場合は 0 を返す
 */
int isNameInKidsFrom(struct kid *first_kid, char name[50]) {
  struct kid *kid = first_kid;
  while (kid != NULL) {
    if (strcmp(kid->name, name) == 0) {
      return 1;
    }
    kid = nextKid(kid);
  }
  return 0;
}

/**
 * first_kid の先頭に新しく newName を持つ kid を追加
 * 返り値は新しく作成した kid へのポインタ
 */
struct kid *push(char newName[50], struct kid *first_kid) {
  struct kid *newKid;
  newKid = malloc(sizeof(struct kid));
  strcpy(newKid->name, newName);
  newKid->next = first_kid;
  return newKid;
}

/**
 *  先頭である first_kid を削除して, 新しく先頭になった kid へのポインタを返す
 */
struct kid *pop(struct kid *first_kid) {
  struct kid *newFirstKid = first_kid->next;
  free(first_kid);
  first_kid = NULL;
  return newFirstKid;
}

int main() {
  struct kid shun, shouhei, hidehumi, tomohumi, kouichi, munehiro;

  /* 初期化 (課題1) */
  printf("課題1 開始\n");
  strcpy(shun.name, "Shun");
  shun.next = &shouhei;
  strcpy(shouhei.name, "Shouhei");
  shouhei.next = &hidehumi;
  strcpy(hidehumi.name, "Hidehumi");
  hidehumi.next = &tomohumi;
  strcpy(tomohumi.name, "Tomohumi");
  tomohumi.next = &kouichi;
  strcpy(kouichi.name, "Kouichi");
  kouichi.next = &munehiro;
  strcpy(munehiro.name, "Munehiro");
  munehiro.next = NULL;
  printf("課題1 終了\n\n");

  /* リストのヘッドから順に名前を出力する (課題2) */
  printf("課題2 開始\n");
  printKidsNameFrom(&shun);
  printf("課題2 終了\n\n");

  /* 課題3 */
  printf("課題3 開始\n");
  /* ひでふみを消すには,しょうへいの次はともふみだよって教えてあげれば良い */
  shouhei.next = &tomohumi;
  printKidsNameFrom(&shun);
  printf("課題3 終了\n\n");

  /* 課題4 */
  printf("課題4 開始\n");
  struct kid shigeo;
  strcpy(shigeo.name, "Shigeo");
  /* しげおの次はしゅんだよって教えてあげる */
  shigeo.next = &shun;
  printKidsNameFrom(&shigeo);
  printf("課題4 終了\n\n");
}
