#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* file;
    int i, size;
    //　書き込むデータ
    char* rData;
    //　バイナリデータの書き込み
    file = fopen("/home/manasanjalekar/デスクトップ/一週間で身につくC・C++言語/コース講座⑮/バイナリファイルの読み書き/test.bin", "rb");
    if(file == NULL){
        printf("ファイルを開けません。\n");
        exit(1);
    }
    
    //　ファイルの最後までシーク
    fseek(file, 0, SEEK_END);
    //　ファイルの大きさを取得
    size = ftell(file);
    //　メモリのサイズだけ、配列を動的に生成
    rData = (char*)malloc(sizeof(char)*size);
    //　再るの最後までポインタを戻す
    fseek(file, 0, SEEK_SET);
    fread(rData, sizeof(char), size, file);
    fclose(file); //　ファイルをクローズ（閉じる）
    
    //　結果を表示
    for(i = 0; i < size; i++){
        printf("%x ", rData[i]);
    }
    printf("\n");
    //　メモリ解放
    free(rData);
}