#include "ambulance.h"
#include <iostream>

using namespace std;

//　コンストラクタ
CAmbulance::CAmbulance() : m_number(119){
    cout << "CAmbulanceオブジェクト生成" << endl;
}

//　デストラクタ
CAmbulance::~CAmbulance(){
    cout << "CAmbulanceオブジェクト破棄" << endl;
}

//　救急救命活動
void CAmbulance::servePeople(){
    cout << "救急救命活動" << endl << "呼び出しは" << m_number << "番です。" <<endl;
}