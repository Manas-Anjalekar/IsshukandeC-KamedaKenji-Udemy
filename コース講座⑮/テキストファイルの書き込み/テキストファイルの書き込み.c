#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file; //　ファイルポインタ（出力用）
    file = fopen("./sample.txt", "w"); //　ファイルを書き込み用にオープン（開く）
    if(file == NULL) { //　オープンに失敗した場合
        printf("ファイルが開けません。\n"); //　エラーメッセージを出す　
        exit(1); //　異常終了
    }
    //　ファイルにデータを書き込み
    fprintf(file, "Hello World!\n"); //　ファイルに書く
    fprintf(file, "マナス・アンジャレカル\n");
    fclose(file); //　ファイルをクローズ（閉じる）
    return 0;
}