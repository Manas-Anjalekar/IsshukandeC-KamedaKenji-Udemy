#include <stdio.h>

int main(){
    //　サイズ3の配列変数の宣言
    double d[3];
    //　合計値、平均値を入れる変数
    double sum, avg;
    //　iという変数の宣言
    int i;
    //　値を代入
    d[0] = 1.2;
    d[1] = 3.7;
    d[2] = 4.1;
    //　sum変数の初期値
    sum = 0.0;
    //　for文で配列変数に代入してある価値の表示
    for (i = 0; i < 3; i++){
        //　printf関数で配列変数の表示
        printf("%f ", d[i]);
        //　配列変数の合計値をsum変数に代入
        sum += d[i];
    }
    printf ("\n"); //　forループが終了した場合に改行
    //　avg変数の初期値
    avg = sum / 3.0;
    printf("合計値：%f\n", sum);
    printf("平均値：%f\n", avg);
    return 0;
}