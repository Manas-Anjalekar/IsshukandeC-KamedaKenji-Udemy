#include "Vector2D.h"

//　コンストラクタ
Vector2D::Vector2D(){
    init();
}

//　値を設定
void Vector2D::setValue(int x, int y){
    m_x = x, m_y = y;
}

//　X座標の取得
int Vector2D::getX(){
    return m_x;
}

//　Y座標の取得
int Vector2D::getY(){
    return m_y;
}

void Vector2D::init(){
    m_x = 0, m_y = 0;
}