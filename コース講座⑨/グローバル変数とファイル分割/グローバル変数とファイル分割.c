#include <stdio.h>

//　グローバル変数の宣言及び初期化
int ans = 0;

//　複数の関数のプロトタイプ宣言
void add(int, int);
void sub(int, int);
void showAnswer();

int main(){
    //　複数の変数の宣言
    int a, b;
    //　printf関数でユーザーに数値を入力してもらう
    printf("数値を入力：\t");
    //　キーボードで値を入力
    scanf("%d %d", &a, &b);

    //　足し算関数の取り戻しをユーザーに見せる
    printf("%d + %d = ", a, b);
    //　add関数の呼び出し
    add(a, b);
    showAnswer();
    //　if関数でaかb、どっちの値が高いかを調べる
    if (a >= b){
        printf("%d - %d = ", a, b);
    }else{
        printf("%d - %d = ", b, a);
    }

    //　sub関数の呼び出し
    sub(a, b);
    showAnswer();
    return 0;
}

//　add関数の宣言
void add(int a, int b){
    //　ans変数に代入
    ans = (a + b);
}

//　sub関数の宣言
void sub(int a, int b){
    //　if関数でaかb、どっちの値が高いかを調べる
    if(a >= b){
        ans = (a - b); //　ans変数に代入
    }else{
        ans = (b - a); //　ans変数に代入
    }
}

//　showAnswer関数の宣言
void showAnswer(){
    //　ans変数を表示
    printf("%d\n", ans);
}