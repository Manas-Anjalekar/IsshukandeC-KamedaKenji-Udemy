#include <stdio.h>
#include <stdlib.h>

int main(){
    //　複数の文字列変数の宣言及び初期化
    char s1[] = "1000";
    char s2[] = "12.345";
    //　整数型変数の宣言
    int a;
    //　浮動小数点数変数の宣言
    double b;
    //　文字列から数値に変換
    a = atoi(s1);
    b = atof(s2);
    //　変換された変数を表示
    printf("a = %d b = %f\n", a, b);
    return 0;
}