#include <stdio.h>

/*
    演算子を用いた計算のプログラム
*/

int main(){
    // 各種演算
    printf("%d + %d = %d\n", 5, 2, 5 + 2);/*足し算*/
    printf("%d - %d = %d\n", 5, 2, 5 - 2);/*引き算*/
    printf("%d * %d = %d\n", 5, 2, 5 * 2);/*掛け算*/
    printf("%d / %d = %d 余り %d\n", 5, 2, 5 / 2, 5 % 2);/*割り算*/
    return 0;
}