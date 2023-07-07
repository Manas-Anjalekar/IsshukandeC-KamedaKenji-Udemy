#include "rat.h"
#include <iostream>

using namespace std;

int main(){
    CRat *r1, *r2, *r3;
    r1 = new CRat(); //　一匹目のネズミ生成
    r1->squeak();
    CRat::showNum(); //　ネズミの数を表示
    r2 = new CRat(); //　二匹目のネズミを生成
    r3 = new CRat(); //　三匹目のネズミを生成
    r2->squeak();
    r3->squeak();
    delete r1; //　一匹目のネズミ消去
    delete r2; //　二匹目のネズミ消去
    CRat::showNum(); //　ネズミの数を表示
    delete r3; //　三匹目のネズミ消去
    CRat::showNum(); //　ネズミの数を表示
    return 0;
}