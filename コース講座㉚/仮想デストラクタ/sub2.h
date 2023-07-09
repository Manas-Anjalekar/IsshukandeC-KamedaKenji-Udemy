#ifndef _SUB2_H_
#define _SUB2_H_

#include "sup2.h"

class CSub2 : public CSup2{
    public:
        CSub2(){
            cout << "CSub2のコンストラクタ" << endl;
        }
        ~CSub2(){
            cout << "CSub2のデストラクタ" << endl;
        }
};

#endif //_SUB2_H_