#include <stdio.h>

//　show関数のプロタイプ宣言
void show(int, int, int);

int main(){
    int a = 100; //　整数型変数a
    int b = 200; //　整数型変数b
    int *p = NULL; //　整数型のポインタ変数p
    p = &a; //　pにａのアドレスを代入
    //　ｓｈｏw関数の呼び出し：一回目
    show(a, b, *p);
    *p = 300; //　*pに値を代入
    //　ｓｈｏw関数の呼び出し：二回目
    show(a, b, *p);
    p = &b; //　pにbのアドレスを代入
    //　ｓｈｏw関数の呼び出し：三回目
    show(a, b, *p);
    *p = 400; //　*pに値を代入
    //　ｓｈｏw関数の呼び出し：四回目
    show(a, b, *p);
    return 0;
}

//　ｓｈｏw関数の宣言
void show(int n1, int n2, int n3){
    printf("a = %d b = %d *p = %d\n", n1, n2, n3);
}