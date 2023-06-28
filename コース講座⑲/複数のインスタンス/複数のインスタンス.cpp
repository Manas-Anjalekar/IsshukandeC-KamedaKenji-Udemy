#include <iostream>
#include "sample.h"

using namespace std;

int main(){
    CSample obj1, obj2; //　CSampleのインスタンスを複数生成

    obj1.set(1); //　obj1のsetのメソッドを呼び出し
    obj2.set(2); //　obj2のsetのメソッドを呼び出し

    cout << obj1.get() << endl; //　obj1のメンバ変数の値を出力
    cout << obj2.get() << endl; //　obj2のメンバ変数の値を出力
    return 0;
}