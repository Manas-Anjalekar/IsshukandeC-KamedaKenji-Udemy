#include <stdio.h>

//　グローバル変数の宣言及び初期化
int global = 10;

//　プロトタイプ宣言
void func1(double, int);
void func2();

int main(){
    //　複数の変数の宣言及び初期化
    double a = 123.41;
    int b = 100;

    //　printf関数でメイン関数の変数を表示
    printf("main処理中\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("*****************\n");
    //　func1の呼び出し
    func1(3.1, 4);
    //　func2の呼び出し
    func2();
    return 0;
}

//　func1関数
void func1(double a, int b){
    printf("func1処理中\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("*****************\n");
}

//　func2関数
void func2(){
    //　複数のローカル変数の宣言及び初期化
    double a = -4.1;
    int b = 2;
    //　printf関数でfunc2関数の変数を表示
    printf("func2処理中\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("********************\n");
}