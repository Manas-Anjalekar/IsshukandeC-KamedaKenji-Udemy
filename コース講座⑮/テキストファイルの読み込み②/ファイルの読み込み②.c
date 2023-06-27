#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file; //　ファイルポインタ（読み込み用）
    int c;      //　読み込む文字のコード
    file = fopen("/home/manasanjalekar/デスクトップ/一週間で身につくC・C++言語/コース講座⑮/テキストファイルの書き込み/sample.txt", "r"); //　ファイルを読み込み用にオープン（開く）
    if (file == NULL){ //　オープンに失敗した場合
        printf("ファイルが開けません。\n"); //　エラーメッセージを出して
        exit(1); //　異常終了
    }
    //　ファイルのデータ読み込む
    while ((c = fgetc(file)) != EOF){
        printf("%c", (char)c);
    }
    fclose(file); //　ファイルをクローズ（閉じる）
    return 0;
}