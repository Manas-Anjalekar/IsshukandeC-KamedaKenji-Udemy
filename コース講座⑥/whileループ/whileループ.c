#include<stdio.h>

int main(){
    //　iという変数の宣言及び初期化
    int i = 0;
    while (i <= 5){
        // printf関数でiの価値を表示
        printf("%d ", i);
        i++; //　i変数の加算
    }
    printf("\n"); //whileループが済んだ場合に改行
    return 0;
}