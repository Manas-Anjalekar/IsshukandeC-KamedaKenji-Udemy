#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

//　ニワトリクラス
class CChicken : public CBird{
    public: 
        //　「鳴く」関数（仮想関数）
        void sing(){
            cout << "コケッコー" << endl;
        }

        //　「飛ぶ」関数
        void fly(){
            cout << "にわとりは飛べません" << endl;
        }
};

#endif //_CHICKEN_H_