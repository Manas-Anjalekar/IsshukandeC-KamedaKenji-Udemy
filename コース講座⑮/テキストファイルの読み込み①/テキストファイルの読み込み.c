#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main(){
    FILE *file; //　ファイルポインタ（読み込み用）
    char line[SIZE]; //　読み込む行
    line[0] = '\n'; //　初期化（空文字列）
    file = fopen("/home/manasanjalekar/デスクトップ/一週間で身につくC・C++言語/コース講座⑮/テキストファイルの書き込み/sample.txt", "r"); //　ファイルを読み込み用にオープン（開く）
    if (file == NULL){ //　オープンに失敗した場合
        printf("ファイルが開けません。\n"); //　エラーメッセージを出して
        exit(1); //　異常終了
    }
    //　ファイルのデータを読み込み
    while (fgets(line, SIZE, file) != NULL) {
        printf("%s", line);
    }
    fclose(file); //　ファイルをクローズ（閉じる）
    return 0;
}