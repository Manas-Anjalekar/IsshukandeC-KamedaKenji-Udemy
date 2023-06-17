#include<stdio.h>

int main(){
    //　複数の変数の宣言
    int i, j;
    //　forの二重ループ
    for (i = 1; i <= 2; i++){
        for (j = 1; j <= 3; j++){
            //　printf関数でi、jと足し算の表示
            printf("%d+%d=%d ", i, j, i + j);
        }
        printf("\n"); //　初for文が済んだ場合に改行
    }
    return 0;
}