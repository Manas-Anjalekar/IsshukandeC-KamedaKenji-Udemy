#include <stdio.h>

int main(){
    //　固定長配列変数の宣言及び初期化
    int n[] = {5, 4, 3, 2, 1};
    //　変数の宣言
    int i;
    //　for文で配列変数に代入してある価値の表示
    for (i = 0; i < 5; i++){
        //　printf関数で整数変数及び配列変数の価値表示
        printf("n[%d] = %d ", i, n[i]);
    }
    printf("\n"); //　forループが終了した場合に改行
    return 0;
}