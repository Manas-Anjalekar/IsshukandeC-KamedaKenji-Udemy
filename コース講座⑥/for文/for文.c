#include<stdio.h>

int main(){
    //　iという変数の宣言
    int i;
    //　for関数でprintf関数の５回表示
    for (i = 1; i <= 5; i++){
        //　printf関数でiに代入した価値の表示
        printf("%d ", i);
    }
    printf("\n"); //　for文が済んだ場合に改行
    return 0;
}