#include <stdio.h>

#define SIZE 5

int main(){
    //　配列変数、整数型変数とポインタ変数の宣言
    int ar1[SIZE];
    char ar2[SIZE];
    int i;
    int* p1 = NULL;
    char* p2 = NULL;
    //　値を代入
    for(i=0; i < SIZE; i++){
        ar1[i] = i;
        ar2[i] = 'A' + i;
    }
    //　ポインタにアドレスを代入
    p1 = &ar1[0];
    p2 = &ar2[0];
    //　値を出力
    for (i=0; i < SIZE; i++){
        printf("ar1[%d] = %d *(p1 + %d) = %d\t", i, ar1[i], i, *(p1 + i));
        printf("ar2[%d] = %c *(p2 + %d) = %c\n", i, ar2[i], i, *(p2 + i));
    } 
    return 0;
}