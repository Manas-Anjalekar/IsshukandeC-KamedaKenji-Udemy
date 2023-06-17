#include <stdio.h>

int main(){
    //　二次元配列変数の宣言
    int a[3][4];
    //　複数の変数の宣言
    int m, n;
    //　for文で二次元配列に値を代入
    for (m = 0; m < 3; m++){
        for (n = 0; n < 4; n++){
            //　mとn変数で二次元配列に値を代入　
            a[m][n] = m + n;
        }
    }
    //　成分の表示
    for (m = 0; m < 3; m++){
        for (n = 0; n < 4; n++){
            //　printf関数で二次元配列の値を表示
            printf("%d ", a[m][n]);
        }
        printf("\n"); //　forループが終了した場合に改行
    }
    return 0;
}