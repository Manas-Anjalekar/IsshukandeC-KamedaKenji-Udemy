#include <stdio.h>

int main(){
    //　int型の変数
    int a = 100;
    //　double型の変数
    double b = 123.4;
    //　float型の変数（数値の後ろにｆをつける）
    float c = 123.4f;
    //　char型の変数
    char d = 'a';
    //　printf関数で顧客に情報表示
    printf("aの値は%d、大きさは%d byte、アドレスは0x%x\n", a, sizeof(int), &a);
    printf("bの値は%f、大きさは%d byte、アドレスは0x%x\n", b, sizeof(double), &b);
    printf("cの値は%f、大きさは%d byte、アドレスは0x%x\n", c, sizeof(float), &c);
    printf("dの値は%c、大きさは%d byte、アドレスは0x%x\n", d, sizeof(char), &d);
    return 0;
}