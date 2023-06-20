#include <stdio.h>

//　変数の値入れ替えを行う関数
void swap(int*, int*);

int main(){
    //　整数型変数ａとbの宣言及び初期化
    int a = 1, b = 2;
    //　printf関数でａとb変数の値を表示
    printf("a = %d b = %d\n", a, b);
    //　swap関数の呼び出し
    swap(&a, &b);
    //　printf関数でａとbの値を再び表示
    printf("a = %d b = %d\n", a, b);
    return 0;
}

//　値の入れ替え
void swap(int* num1, int* num2){
    //　一時的な整数型変数の宣言及び初期化
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}