#include <stdio.h>

/*
    変数を用いた計算
*/

int main(){
    /*使用する変数の定義*/
    int a; // 変数の宣言
    int b = 3; // 初期化と代入を同時に行う。
    int add, sub; // 複数の変数を同時に宣言
    double avg; // int以外の変数を宣言
    a = 10; // 代入（最初に値を入れるので、”初期化”と言う。）
    add = a + b; // ａ、ｂの和を求める。
    sub = a - b; // ａ、ｂの差を求める。
    avg = add / 2.0; // ａ、ｂの平均値を求める。
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, a -b);
    printf("%dと%dの平均値：%f\n", a, b, avg);
    return 0;
}