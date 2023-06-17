#include <stdio.h>

int main(){
    //　numという変数の宣言
    int num;
    //　printf関数でユーザーに報告メッセージ
    printf("負の値で、ループから抜けます。\n");
    //　whileループで実行
    while(1){
        //　printf関数でユーザーに変数の価値を代入してもらう
        printf("数値を入力：\t");
        //　キーボードで数値を入力
        scanf("%d", &num);
        //　num変数の価値が、正の数か負の数かを調べる
        if (num < 0){
            //　ループから抜ける処理
            break;
        }
    }
    printf("終了\n"); //　ループが終了した場合に改行
    return 0;
}