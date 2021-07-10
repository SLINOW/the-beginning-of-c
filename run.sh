#! /bin/bash

file_name_without_extension=$(echo $1 | sed 's/\.[^\.]*$//')

# コンパイル
gcc $1 -o $file_name_without_extension
# 実行
$file_name_without_extension
