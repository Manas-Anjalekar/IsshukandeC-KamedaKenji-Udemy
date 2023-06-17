#include <stdio.h>
#include "ファイル分割の基本_avg.c"

//　avg関数のプロトタイプ宣言
double avg(double, double);

int main(){
    //　複数の変数の宣言
    double d1, d2, d3;
    double a = 1.2, b = 3.4, c = 2.7;
    //　同じ計算が３回（関数を呼び出して計算）
    d1 = avg(a, b);
    d2 = avg(4.1, 5.7);
    d3 = avg(c, 2.8);
    //　printf関数で戻り値を表示
    printf("d1 = %f d2 = %f d3 = %f\n", d1, d2, d3);
    return 0; 
}