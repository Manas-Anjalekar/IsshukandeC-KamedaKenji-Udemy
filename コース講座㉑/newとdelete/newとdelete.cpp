#include "car.h"
#include <iostream>

using namespace std;

int main(){
    CCar* pC = 0;
    pC = new CCar(); //　インスタンス生成
    pC->supply(10); //　燃料補給
    pC->move(); //　移動
    pC->move(); //　移動
    delete pC; //　インスタンスの消去
    cout << "インスタンスの消去終了" << endl;
    return 0;
}