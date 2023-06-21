#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main(){
    // 整数型ポインタの宣言及び初期化
    int* p1 = NULL;
    // 浮動小数点数型ポインタの宣言及び初期化
    double *p2 = NULL;
    // 変数の宣言
    int i;
    // 配列の生成
    p1 = (int*)malloc(sizeof(int)*SIZE);
    p2 = (double*)malloc(sizeof(double)*SIZE);
    // 値の代入
    for(i = 0; i < SIZE; i++){
        p1[i] = i;
        p2[i] = i / 10.0;
    }
    // 結果の出力
    for(i = 0; i < SIZE; i++){
        printf("p1[%d] = %d p2[%d] = %f\n", i, p1[i], i, p2[i]);
    }
    // メモリの開放
    free(p1);
    free(p2);
    return 0;
}