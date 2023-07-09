#ifndef _SUP1_H_
#define _SUP1_H_

#include <iostream>

using namespace std;

class CSup1 {
    public:
        CSup1(){
            cout << "CSup1のコンストラクタ" << endl;
        }
        ~CSup1(){
            cout << "CSup1のデストラクタ" << endl;
        }
};

#endif //_SUP1_H_