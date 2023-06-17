#include<stdio.h>

int main(){
    //　iという変数の宣言及び初期化
    int i = 0;
    // do〜whileループでi変数の価値を５回表示
    do
    {
        //printf関数でｉ変数の価値を表示
        printf("%d ", i);
        i++; //　ｉ変数の加算
    } while (i <= 5);
    printf("\n"); //　ｄｏ〜whileループが済んだ場合に改行

    return 0;
}