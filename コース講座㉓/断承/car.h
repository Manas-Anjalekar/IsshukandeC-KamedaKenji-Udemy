#ifndef _CAR_H_
#define _CAR_H_

//　自動車クラス
class CCar{
    public:
        //　コンストラクタ
        CCar();
        //　デストラクタ
        virtual ~CCar();
        //　移動メソッド
        void move();
        //　燃料補給メソッド
        void supply(int fuel);

    private:
        int m_fuel; //　燃料
        int m_migration; //　移動距離
};

#endif //_CAR_H_