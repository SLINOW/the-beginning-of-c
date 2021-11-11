# array_report3.c

## 1.アルゴリズム
50人の成績データを2次元配列に格納する.
ただし,`score[i][j] = (i組j番目の受験者の点数)`とする.
また,最大得点を保存する変数`max_score`を用意し,小さい値で初期化する.
最大得点をとった受験者の所属する組とその組内での番号を保存する変数`max_class`,`max_index`を用意する.

for文を用いて,50人分の成績データ全てについて,以下の操作を行う.
- 全組の合計点や各組の合計点を算出するための変数`sum`,`class_sum`に`score[i][j]`を加える.
- `score[i][j]`が`max_score`よりも大きい値であったら,その点数がその時点での最高得点であるから,`max_score`,`max_class`,`max_index`を
それぞれ`score[i][j]`,`i`,`j`で置き換える.

ただし,各組(`i`組とする)に対して,上記の処理を行なったのちに以下の操作を行う.
- 各組の平均点を算出するために,`class_sum`を10で割った値を`class_average[i]`に格納する.
その後,`class_sum`を0に初期化する.

上記の処理が終了したら,全受験者の平均点を格納する`average`を用意しておき,そこに`sum`を50で割った値を代入する.

最後に,適切なフォーマットで結果を出力する.

## 2.ソースコードの説明
作成したソースコードの一部は以下の通りである.
```c
/* 成績データ: class 組 index 番の点数を score[class][index] とする */
int score[5][10] = {
  {83, 0, 68, 39, 84, 26, 4, 18, 18, 89},
  {72, 17, 17, 6, 5, 28, 24, 94, 8, 98},
  {45, 63, 44, 78, 72, 38, 31, 80, 7, 78},
  {56, 57, 44, 23, 96, 95, 16, 66, 12, 0},
  {54, 50, 85, 72, 56, 90, 66, 47, 49, 100}
};

/* 合計点 */
int sum = 0, class_sum = 0;
/* 平均点 */
float average;
/* 各組の平均点 */
float class_average[5];
/* 最高点と所属する組と番号 */
int max_score = -1, max_class, max_index;
/* ループ用 */
int class, index;

/* 各値の計算 */
for (class = 0; class < 5; class++) {
  for (index = 0; index < 10; index++) {
    sum += score[class][index];
    class_sum += score[class][index];
    if (max_score < score[class][index]) {
      max_score = score[class][index];
      max_class = class;
    max_index = index;
    }
  }
  class_average[class] = class_sum / 10.0;
  class_sum = 0;
}
/* 平均点の計算 */
average = sum / 50.0;

/* 出力 */
printf("--- 全受験者の平均点 ---\n");
printf("%f点\n", average);
printf("\n");
printf("--- 各組の平均点 ---\n");
for (class = 0; class < 5; class++) {
  printf("%d組：%f点\n", class + 1, class_average[class]);
}
printf("\n");
printf("--- 最高得点 ---\n");
printf("点数：%d点\n", max_score);
printf("番号：%d\n", (max_class + 1) * 10 + max_index);
printf("所属：%d\n", max_class);
```

アルゴリズムの説明で述べたように,成績データを保存する2次元配列を用意し,与えられた成績データで初期化しておく.
アルゴリズムに従って,全受験者の平均点,各組の平均点,点数が最も高い受験者の点数と所属する組と番号を出力する.

## 3.考察
この問題を解く上で,全受験者の平均点を5組の平均点の平均を取ることで求めることも数学的には可能であるが,プログラム上において小数の計算は誤差が生じる恐れがあるため,
なるべく最後まで小数の計算をしない方が良い.