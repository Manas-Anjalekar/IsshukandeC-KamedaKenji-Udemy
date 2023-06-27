#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    int i;
    //　書き込むデータ
    char wData[] = { 0x10, 0x1a, 0x1e, 0x1f };
    char rData[4];
    //　バイナリデータの書き込み
    file = fopen("./test.bin", "wb");
    if (file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }
    fwrite(wData, sizeof(char), 4, file);
    fclose(file); //　ファイルをクローズ（閉じる）

    //　バイナリデータの書き込み
    file = fopen("./test.bin", "rb");
    if (file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }
    fread(rData, sizeof(char), sizeof(rData), file);
    fclose(file); //　ファイルをクローズ（閉じる）

    //　結果を表示
    for(i = 0; i < sizeof(rData); i++){
        printf("%x", rData[i]);
    }
    printf("\n");
    return 0;
}