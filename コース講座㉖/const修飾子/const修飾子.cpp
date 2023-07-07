#include <iostream>
#include <string>
#include "sample.h"

using namespace std;

int main(){
    CSample s;
    cout << "定数：" << s.m_cst << endl;
    s.setStr("ABC"); //　値の設定
    cout << s.getStr() << endl; //　値の取得
    return 0;
}