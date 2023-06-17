#include<stdio.h>
#include<math.h>

int main(){
    //　複数の変数を宣言及び初期化
    int n = -2;
    double d1 = -2.5, d2 = 4.0;
    //　printf関数での結果表示
    printf("%dの絶対値は%dです。\n", n, abs(n));
    printf("%fの絶対値は%fです。\n", d1, fabs(d1));
    printf("%fの二乗は%fです。\n", d2, pow(d2, 2));
    printf("%fの平方根は%fです。\n", d2, sqrt(d2));
    return 0;
}