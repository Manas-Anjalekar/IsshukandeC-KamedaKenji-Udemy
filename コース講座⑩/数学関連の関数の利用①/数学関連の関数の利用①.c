#include <stdio.h>
#include <math.h>

//　PI定数の宣言及び定理
#define PI 3.14

int main(){
    //　角度変数とラジアン変数の宣言
    int angle;
    double rad;
    //　printf関数でユーザーに値を入力してもらう
    printf("角度を入力してください（０〜３６０）：\t");
    //　キーボードで値を入力
    scanf("%d", &angle);

    //　角度をラジアンに交換
    rad = PI * (double)angle / 180.0;
    //　三角関数での計算
    printf("sin(%d)=%f\n", angle, sin(rad));
    printf("cos(%d)=%f\n", angle, cos(rad));
    printf("tan(%d)=%f\n", angle, tan(rad));
    return 0;
}