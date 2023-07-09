#ifndef _CROW_H_
#define _CROW_H_

#include "bird.h"

//　カラスクラス
class CCrow : public CBird{
    public:
        //　「鳴く」関数（仮想関数）
        void sing(){
            cout << "カーカー" << endl;
        }

        //　「飛ぶ」関数
        void fly() {
            cout << "カラスが飛びます" << endl;
        }
};
#endif //_CROW_H_