#include "sample.h"

CSample::CSample(){
    m_str = "";
}

void CSample::setStr(const string str){
    m_str = str;
    //str = "";
}

string CSample::getStr() const{
    // m_str = "";
    return m_str;
}