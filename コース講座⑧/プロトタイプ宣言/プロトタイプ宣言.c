#include <stdio.h>

//　avg関数のプロトタイプ宣言
double avg(double, double);

int main(){
    //　複数の変数の宣言
    double d1, d2, d3;
    double a, b, c;
    //　printf関数でユーザーに入力してもらう
    printf("数値を入力：\t");
    //　キーボードで値を入力
    scanf("%lf %lf %lf", &a, &b, &c);
    //　同じ計算が3回（関数を呼び出して計算）
    d1 = avg(a, b);
    d2 = avg(4.1, 5.7);
    d3 = avg(c, 2.8);
    //　printf関数で計算の表示
    printf("d1 = %f\td2 = %f\td3 = %f\n", d1, d2, d3);
    return 0;
}

//　平均値を求める関数の作り方
double avg(double l, double m){
    //　引数l、mの平均値を求め、rに代入する。
    double r = (l + m) / 2.0;
    //　r変数の価値をメイン関数に返す。
    return r;
}