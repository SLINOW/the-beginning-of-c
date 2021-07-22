# the-beginning-of-c

## 目次

- [ソースコード一覧](#list-of-sources)
- [課題](#homework)
- [Tips](#tips)
    - [コンパイルと実行を同時に行うシェルスクリプト](#script)

<a id="list-of-sources"></a>
## ソースコード一覧

1. C言語の基礎
    - [何もしないプログラム](none/none.c)
    - [演習1:何もしないプログラム](ex/exe01.c)
1. 簡単なプログラム
    - [いくつかの文字列を出力するプログラム](helloWorld/helloWorld.c)
    - [演習2:文字列の出力](ex/exe02.c)
1. 変数とその出力
    - [変数の宣言と代入,コメントの書き方,変数の出力](var/var_1.c)
    - [演習3:変数への代入]
        - [整数型の変数の宣言と出力](ex/exe03_1.c)
        - [文字型の変数の宣言と出力](ex/exe03_2.c)
1. 演算子
    - [四則演算,演算子を用いた代入,代入を伴う演算子,インクリメント・デクリメント](op/op.c)
    - [演習4:整数型の変数と加法](ex/exe04.c)
    - [演習5:整数型の四則演算](ex/exe05.c)
1. 条件分岐
    - [if-else文](if/alcohol_1.c)
    - [if-else-if文,switch文](if/signal_1.c)
    - [3項演算子](ternary_operation/alcohol_tertiary.c)
    - [3項演算子を代入に用いるケース](ternary_operation/tertiary.c)
    - [演習6:条件文]
        - [十二支の判定](ex/exe06.c)
        - [十干十二支の判定](ex/exe06_1.c)
        - [誕生日と任意の日付から,その時点での年齢を出力する](ex/exe06_2_normal.c)
            - [(分かる人向け)関数を用いて厳密性を高めた別解](ex/exe06_2_advanced.c)
    - [演習7:判別式]
        - [判別式の判定](ex/exe07.c)

<a id="homework"></a>
## 課題

- [〜9/8までの課題]
    - [閏年の判定](summer_homework/summer_01.c)
    - [演算](summer_homework/summer_02.c)
- [〜9/29までの課題]
    - [指定された日の星座を表示する](report/report_01.c)
        - [(分かる人向け)関数を用いて厳密性・拡張性を高めた別解](report/report_01_advanced.c)

<a id="tips"></a>
## Tips

<a id="script"></a>
### コンパイルと実行を一度に行うシェルスクリプト

1. シェルスクリプトは[ここ](run.sh)にあるので,これをダウンロードして任意の場所に配置する.
2. 起動時にaliasを登録させたいので,任意のシェルの起動時に読み込まれる設定ファイル(zshなら~/.zshrc,bashなら~/.bashrc)に以下を書き込んでおく.
```shell
alias run="source <run.shまでのパス>"
```
3. 設定をリロード
```shell
source ~/.zshrc (./bashrc)
```
4. 任意のディレクトリに移動して,
```shell
run <ソースファイル名>
```
でコンパイルと実行ができる.
作成される実行ファイルは,ソースファイル名から.cを抜いたものになっている.

