#include <stdio.h>
#include <string.h>

int main(){
    // 文字列変数の宣言
    char s[10];
    //　整数変数の宣言
    int len;
    //　文字列のコピー
    strcpy(s, "ABC");
    // printf関数で文字列変数を表示
    printf("文字列s = %s\n", s);
    //　文字列の結合
    strcat(s, "DEF");
    //　printf関数で更新された文字列変数を表示
    printf("更新された文字列s = %s\n", s);
    //　文字列の長さ
    len = strlen(s);
    // printf関数で文字列の長さを表示
    printf("文字列の長さ：%d\n", len);
    return 0;
}