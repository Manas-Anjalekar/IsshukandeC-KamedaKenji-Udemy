#include <stdio.h>
#include <string.h>

int main(){
    //　複数の文字列の宣言
    char s1[256], s2[256];
    //　複数の整数型変数の宣言及び初期化
    int a = 100, b = 200;
    //　sprintf関数で文字列s1とs2にaとbの値を代入
    sprintf(s1, "%d", a);
    sprintf(s2, "bの値は%dです。", b);
    //　puts関数でs1及びs2文字列の表示
    puts(s1);
    puts(s2);
    return 0;
}