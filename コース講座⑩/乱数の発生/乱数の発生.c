#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //　複数の変数の宣言
    int a, b;
    //　乱数の初期化
    srand((unsigned)time(NULL));
    //　１から１０までの乱数を発生させる
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;
    //　計算結果を出力
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}