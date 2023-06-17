#include <stdio.h>

int main(){
    int i1, j1, i2, j2;
    double d1, e1, d2, e2;
    // j1、j2に値を代入
    j1 = 3;
    j2 = 3;
    // d1、d2に値を代入
    d1 = 1.23;
    d2 = 1.23;
    // ｉ１、ｉ２にｄ１、ｄ２の値を代入
    i1 = d1; // 普通に代入
    i2 = (int)d2; //　キャストして代入
                     //　ｅ１、ｅ２にj１、j２の値を代入
    e1 = j1; //　普通の代入
    e2 = (double)j2; //　キャストして代入
    printf("d1 = %f d2 = %f\n", d1, d2);
    printf("i1 = %d i2 = %d\n", i1, i2);
    printf("j1 = %d j2 = %d\n", j1, j2);
    printf("e1 = %f e2 = %f\n", e1, e2);
    return 0;
}