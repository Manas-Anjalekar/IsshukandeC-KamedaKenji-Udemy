#include <stdio.h>

//　max、showとline関数のプロトタイプ宣言
int max(int, int);
void show(int);
void line();

int main(){
    //　複数の変数の宣言
    int n1, n2;
    //　printf関数でユーザーに数値を入力してもらう
    printf("二つの数値を入力：\t");
    //　キーボードで数値を入力
    scanf("%d %d", &n1, &n2);
    //　先に宣言した関数の呼び出し
    line();
    show(n1);
    show(n2);
    printf("二つの数のうち、大きい数は、%dです。\n", max(n1, n2));
    line();
    return 0;
}

//　二つの整数のうち最大値を求める関数
int max(int a, int b){
    //　aとb変数の価値を比較
    if(a >= b){
        return a;
    }else{
        return b;
    }
}

//　数値を表示する関数
void show(int a){
    //　printf関数で数値を表示
    printf("入力した数値：%d\n", a);
    return;
}

void line(){
    //　printf関数で「*」のキャラクターを表示
    printf("--------------------------------------\n");
    return;
}