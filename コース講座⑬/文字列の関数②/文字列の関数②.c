#include <stdio.h>
#include <string.h>

int main(){
    //　文字列s1とs2の宣言
    char s1[256], s2[256];
    //　printf関数でユーザーに文字列を入力してもらう
    printf("文字列s1を入:\t");
    //　キーボードで値を入力
    scanf("%s", s1);
    //　printf関数でユーザーに再び文字列を入力してもらう
    printf("文字列s2を入力:\t");
    //　キーボードで値を入力
    scanf("%s", s2);
    // 入力してもらった文字列が等しいかどうかを調べる
    if (strcmp(s1, s2) == 0){
        //　printf関数でユーザーに報告
        printf("s1とs2は等しい\n");
    }else{
        printf("s1とs2は等しくない\n");
    }
    return 0;
}