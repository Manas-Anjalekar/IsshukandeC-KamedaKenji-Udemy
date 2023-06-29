#include <iostream>
#include "sample.h"

using namespace std;

void Sample::func1(){
    cout << "func1" << endl;
    a = 1;
    b = 1;
    func2(); //　func2ないから、func1を呼び出す
}

void Sample::func2(){
    a = 2;
    b = 2;
    cout << "a = " << a << endl << "b = " << b << endl;
}