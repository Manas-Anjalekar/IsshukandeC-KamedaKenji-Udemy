#ifndef _SUP2_H_
#define _SUP2_H_

#include <iostream>

using namespace std;

class CSup2 {
    public:
        CSup2(){
            cout << "CSup2のコンストラクタ" << endl;
        }
        virtual ~CSup2(){
            cout << "CSup2のデストラクタ" << endl;
        }
};

#endif //_SUP2_H_