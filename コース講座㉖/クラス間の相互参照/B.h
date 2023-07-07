#ifndef _B_H_
#define _B_H_

class A; //　クラスAへの参照

class B{
    private:
        A * m_pA;

    public:
        B(A* pA); //コンストラクタ
        virtual ~B(); //デストラクタ
        void hoge();
};

#endif //_B_H_