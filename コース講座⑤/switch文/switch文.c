#include<stdio.h>

int main(){
    //　numという整数値的な変数の宣言
    int num;
    //　printf関数でユーザーに数値を入力してもらう
    printf("１〜３の値を入力してください：\t");
    //　キーボードから整数を入力
    scanf("%d", &num);
    //　入力した値が、正の数かどうかを調べる
    switch (num)
    {
    case 1:
        printf("one。\n"); //　numが１だった場合の処理
        break;
    case 2:
        printf("two。\n"); //　numが２だった場合の処理
        break;
    case 3:
        printf("three。\n"); //　numが３だった場合の処理
        break;
    default:
        printf("不適切な値です。\n"); //　それ以外の値が入力された場合の処理
        break;
    }
    return 0;
}