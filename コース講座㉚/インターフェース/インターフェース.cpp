#include <iostream>
#include "Ilnf1.h"
#include "Ilnf2.h"
#include "Sample.h"

//　Ilnf1のみが使える関数
void foo(Ilnf1*);
//　Ilnf2のみが使える関数
void bar(Ilnf2*);

int main(){
    CSample* s = new CSample();
    foo((Ilnf1*)s);
    bar((Ilnf2*)s);
    return 0;
}

//　Ilnf1のみが使える関数
void foo(Ilnf1* p){
    p->func1();
    p->func2();
}

//　Ilnf2のみが使える関数
void bar(Ilnf2* p){
    p-> func3();
    p->func4();
}