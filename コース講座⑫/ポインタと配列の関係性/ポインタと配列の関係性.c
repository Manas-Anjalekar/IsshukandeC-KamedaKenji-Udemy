#include <stdio.h>

int main(){
    //　サイズSIZEの配列を用意する。
    double d[3] = {0.2, 0.4, 0.6};
    //　複数のポインタ変数の宣言及び初期化
    double *p1 = NULL;
    double *p2 = NULL;
    //　整数型変数の宣言
    int i;
    //　ポインタにアドレスを代入
    p1 = d;
    p2 = d;
    for(i = 0; i < 3; i++){
        //　printf関数で3つの変数の値を表示
        printf("%f %f %f\n", *(d + i), p1[i], *p2);
        //　p2のアドレスをインクリメント
        p2++;
    }
    return 0;
}