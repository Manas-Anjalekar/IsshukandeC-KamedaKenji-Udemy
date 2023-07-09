#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string> 

using namespace std;

class CBird{
    public:
        //　「鳴く」関数（仮想関数）
        virtual void sing(){
            cout << "鳥が鳴きます" << endl;
        }

        //　「飛ぶ」関数
        void fly(){
            cout << "鳥が飛びます" << endl;
        }
};

#endif //_BIRD_H_