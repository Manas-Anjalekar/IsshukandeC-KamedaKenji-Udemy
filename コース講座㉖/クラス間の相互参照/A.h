#ifndef _A_H_
#define _A_H_

class B; //　クラスBへの参照

class A{
    private:
        B * m_pB;

    public:
        A(); //コンストラクタ
        virtual ~A(); //デストラクタ
        void foo();
        void bar();
};

#endif //_A_H